/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 19.06.2026 21:32:42
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
 
void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
 
    for(auto &x:a) cin>>x;
 
    vector<ll> pos;
    ll ans=0;
 
    for(ll i=0;i<n;i++){
        if(a[i]<i+1){
            ans+=lower_bound(pos.begin(),pos.end(),a[i])-pos.begin();
            pos.push_back(i+1);
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