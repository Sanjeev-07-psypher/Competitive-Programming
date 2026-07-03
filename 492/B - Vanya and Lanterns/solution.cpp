/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 13.06.2026 22:50:46
**/
 
#include <bits/stdc++.h>
 
// --- For Debugging ---
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
//-------------------
 
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
    ld n,l;
    cin>>n>>l;
    vector<ld> v(n);
    for(auto &it: v) cin>>it;
    srt(v);
 
    ld mx=0;
    for(int i=0;i<n-1;i++){
        mx=max(mx,(v[i+1]-v[i])/2);
    }
 
    if(v[0]!=0){
        mx=max(mx,v[0]-0);
    } 
    if(v[n-1]!=l){
        mx=max(mx,l-v[n-1]);
    }
    cout<<fixed<<setprecision(10)<<mx<<endl;
    
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