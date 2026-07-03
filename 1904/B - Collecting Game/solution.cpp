/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 09.06.2026 16:14:15
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
#define ld long double
#define endl '
'
const int mod = 1e9+7;
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
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto &it:v) cin>>it;
    vector<pair<ll,ll>> p;
    for(int i=0;i<n;i++){
        p.push_back({v[i],i});
    }
    srt(p);
    srt(v);
    
    vector<ll> prefix(n);
    prefix[0]=v[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+v[i];
    }
 
 
    vector<ll> ans(n);
    
 
    ans[p[n-1].second]=n-1;
    for(int i=n-2;i>=0;i--){
        if(prefix[i]>=p[i+1].first){
            ans[p[i].second]=ans[p[i+1].second];
        } else {
            ans[p[i].second]=i;
        }
    }
 
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
    
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