/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 07.04.2026 20:49:32
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
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n),p(k);
    for(auto &it:v) cin>>it;
    for(auto &it:p) cin>>it;
    for(int i=0;i<k;i++){
        p[i]--;
    }
    ll l=0,r=0;
    for(int i=0;i<k;i++){
        ll currL=0;
        for(int j=0;j<p[i];j++){
            if(v[j]!=v[j+1]) currL++;
        }
        l=max(l,currL);
    }
    for(int i=0;i<k;i++){
        ll currR=0;
        for(int j=p[i];j<n-1;j++){
            if(v[j]!=v[j+1]) currR++;
        }
        r=max(r,currR);
    }
    ll ans = max(l,r);
    if(ans%2!=0) ans++;
    cout<<ans<<endl;
}
 
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