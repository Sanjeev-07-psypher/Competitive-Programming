/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 02.06.2026 14:26:12
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
    vector<ll> x(n),y(n);
    for(auto &it :x) cin>>it;
    for(auto &it :y) cin>>it;
 
    vector<ll> diff(n);
    for(int i=0;i<n;i++){
        diff[i]=y[i]-x[i];
    }
    sort(diff.begin(),diff.end());
    ll ans=0;
 
    ll l=0,r=n-1;
    while(l<r){
        if(diff[l]+diff[r]>=0){
            ans++;
            l++;
            r--;
        } else {
            l++;
        }
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