/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 09.06.2026 20:54:58
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
    vector<ll> a(n),b(n);
    for(auto &it: a) cin>>it;
    for(auto &it: b) cin>>it;
    srt(a);
 
    vector<ll> prefix(n);
    prefix[0]=b[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+b[i];
    }
    ll mx=1;
    for(auto x: a){
        ll totalSwords=a.end()-lower_bound(a.begin(),a.end(),x);
        ll level=upper_bound(prefix.begin(),prefix.end(),totalSwords)-prefix.begin();
        // cout<<totalSwords<<" "<<level<<" "<<x<<endl;
        mx=max(mx,(level)*x);
    }
    cout<<mx<<endl;
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