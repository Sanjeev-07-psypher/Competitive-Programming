/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 15.06.2026 22:42:31
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
    for(auto &it: v) cin>>it;
    vector<ll> pre(n),suf(n);
    pre[0]=v[0];
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+v[i];
    }
    suf[n-1]=v[n-1];
    for(int i=n-2;i>=0;i--){
        suf[i]=suf[i+1]+v[i];
    }
 
    ll l=0;
    ll r=n-1;
 
 
 
    ll ans=0;
    while(l<r){
        if(pre[l]==suf[r]){
            ans=max(ans,n-r+l+1);
            l++;
            r--;
        }
        else if(pre[l]<suf[r]){
            l++;
        } 
        else {
            r--;
        }
    }
    cout<<ans<<endl;
}
 
//--- Main Function ---
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