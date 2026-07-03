/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 20.06.2026 21:52:15
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
    for(auto &it :a) cin>>it;
    for(auto &it :b) cin>>it;
    for(auto &it :c) cin>>it;
    vector<pair<ll,ll>> ap(n),bp(n),cp(n);
    for(int i=0;i<n;i++){
        ap.pb({a[i],i});
        bp.pb({b[i],i});
        cp.pb({c[i],i});
    }
    sort(ap.rbegin(),ap.rend());
    sort(bp.rbegin(),bp.rend());
    sort(cp.rbegin(),cp.rend());
    vector<bool> vis(3,false);
    ll ans=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                ll ia=ap[i].second;
                ll ib=bp[j].second;
                ll ic=cp[k].second;
                if(ia!=ib && ia!=ic && ib!=ic){
                    ans=max(ans,ap[i].first+bp[j].first+cp[k].first);
                }
            }
        }
    }
    cout<<ans<<endl;
}
 
// -- Main Function ---
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