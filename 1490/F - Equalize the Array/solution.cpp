/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 14.06.2026 21:50:13
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
    map<ll,ll> freq;
 
    for(auto x : v){
        freq[x]++;
    }
    vector<ll> f;
    for(auto x: freq){
        f.push_back(x.second);
    }
    srt(f);
    ll m=f.size();
    vector<ll> pre(m+1,0);
    for(int i=0;i<m;i++){
        pre[i+1]=pre[i]+f[i];
    }
    ll ans=n;
    for(int i=0;i<m;i++){
        ll k=f[i];
        ll l=pre[i];
        ll r=(pre[m]-pre[i])-k*(m-i);
        ans=min(ans,l+r);
    }
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