/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 28.04.2026 23:52:28
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
    vector<ll> v(n);
    for(auto &it:v) cin>>it;
    vector<ll> odd,even;
    for(int i=0;i<n;i++){
        if(v[i]%2==0) even.push_back(v[i]);
        else odd.push_back(v[i]);
    }
    srt(odd);
    ll ans=0;
    if(odd.size()==0){
        cout<<0<<endl;
        return;
    }
    ll mid=odd.size()/2;
    for(int i=mid;i<odd.size();i++){
        ans+=odd[i];
    }
    for(int i=0;i<even.size();i++){
        ans+=even[i];
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