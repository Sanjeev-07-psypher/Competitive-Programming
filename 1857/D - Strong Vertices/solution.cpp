/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 16.06.2026 22:36:27
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
    vector<ll> a(n),b(n),c(n);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
    for(int i=0;i<n;i++){
        c[i]=a[i]-b[i];
    }
    ll mx=*max_element(c.begin(),c.end());
    vector<pair<ll,ll>> p;
    vector<ll> ans;
    for(int i=0;i<n;i++){
        p.pb({c[i],i+1});
    }
    sort(p.rbegin(),p.rend());
    for(int i=0;i<n;i++){
        if(p[i].first==mx){
            ans.pb(p[i].second);
        } else break;
    }
    sort(ans.begin(),ans.end());
    ll m=ans.size();
    cout<<m<<endl;
    pin(ans);
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