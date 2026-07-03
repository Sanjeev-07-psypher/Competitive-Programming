 
/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 09.03.2026 23:19:07
**/
 
#include <bits/stdc++.h>
 
// --- For Debugging ---
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
// -------------------
 
using namespace std;
 
#define ll long long int
#define endl '
'
 
// --- Type Definitions ---
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll, ll> ii;
typedef vector<ii> vp;
 
// --- Shorthand Macros ---
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v))
#define pb push_back
 
// --- I/O Helper Functions ---
void vin(vi &a, ll n) {
    a.resize(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
}
 
void pin(const vi &a) {
    for (size_t i = 0; i < a.size(); i++) {
        cout << a[i] << (i == a.size() - 1 ? "" : " ");
    }
    cout << endl;
}
 
// --- Main Solve Function ---
void solve() {
    ll n,x;
    cin>>n>>x;
    vector<ll> v(n);
    for(auto &it: v) cin>>it;
    int ans=0;
    vector<pair<ll,ll>> p(n);
    for(int i=0;i<n;i++){
        p[i]={v[i]-x,v[i]+x};
    }
    int L=p[0].first;
    int R=p[0].second;
    for(int i=1;i<n;i++){
        
        int currL=p[i].first;
        int currR=p[i].second;
 
        int nextL = max(L,currL);
        int nextR = min(R,currR);
        if(nextL>nextR) {
            ans++;
            L=currL;
            R=currR;
        } else{
            L=nextL;
            R=nextR;
        }
    }
    cout<<ans<<endl;
}
 
// 12 8
// 25 3 3 17 8 6 1 16 15 25 17 23
// 25 | 3 3 17 8 6 1 16 15 
 
// --- Main Function ---
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}