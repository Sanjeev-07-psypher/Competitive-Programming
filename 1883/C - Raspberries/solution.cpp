/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 05.02.2026 18:51:44
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
    vector<ll> v(n);
    for(auto &it: v) cin>>it;
 
    ll product=accumulate(v.begin(),v.end(),1LL,multiplies<ll>());
    
    
        ll evenCount=0;
        ll ans =INT_MAX;
        for(ll i=0;i<n;i++){
            if(v[i]%2==0) evenCount++;
            if(v[i]%k==0) ans = 0;
            ans = min( ans,( k - v[i] % k));
        }
        if(k==4){
            if(evenCount>=2) ans = min(ans, 0LL);
            else if(evenCount==1) ans = min(ans, 1LL);
            else if(evenCount==0) ans = min(ans, 2LL);
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