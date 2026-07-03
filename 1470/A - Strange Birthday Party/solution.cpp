/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 16.06.2026 21:27:58
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
    ll n,m;
    cin>>n>>m;
    vector<ll> k(n+1),c(m+1);
    for(int i=1;i<=n;i++){
        cin>>k[i];
    }
    for(int i=1;i<=m;i++){
        cin>>c[i];
    }
    vector<pair<ll,ll>> p;
    for(int i=1;i<=n;i++){
        p.pb({k[i],i});
    }
    sort(p.rbegin(),p.rend());
    int j=1;
    ll ans=0;
    for(int i=0;i<p.size();i++){
        if( j<=m && c[p[i].first]>=c[j]){
            ans+=c[j];
            j++;
        } else {
            ans+=c[p[i].first];
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