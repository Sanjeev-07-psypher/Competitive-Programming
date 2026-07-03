/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 12.06.2026 22:05:43
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
 
bool check(vector<ld>&x, vector<ld>&v, ld t){
    ld left=-1e18;
    ld right=1e18;
 
    for(int i=0;i<x.size();i++){
        left=max(left,x[i]-v[i]*t);
        right=min(right,x[i]+v[i]*t);
    }
    return left<=right;
}
 
// --- Main Solve Function ---
void solve() {
    ll n;
    cin>>n;
    vector<ld> x(n),v(n);
    for(auto &it:x) cin>>it;
    for(auto &it:v) cin>>it;
 
    ld l=0;
    ld h=1e9;
    ld ans=h;
    while(h-l>1e-7){
        ld mid= l+(h-l)/2;
        if(check(x,v,mid)){
            ans=mid;
            h=mid;
        } else {
            l=mid;
        }
    }
    cout<<fixed<<setprecision(7)<<ans<<endl;
}
 
// --- Main Function ---
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}