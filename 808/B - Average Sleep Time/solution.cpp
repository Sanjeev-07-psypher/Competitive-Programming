/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 21.06.2026 19:06:54
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
    ll n,k;
    cin>>n>>k;
    vector<ld> v(n);
    for(auto &it:v) cin>>it;
    for(int i=1;i<n;i++){
        v[i]=v[i]+v[i-1];
    }
    ld sum=0;
    for(int i=0;i<=n-k;i++){
        if(i==0) sum=v[k-1];
        else sum+=v[k+i-1]-v[i-1];
    }
    ld ans=sum/(n-k+1);
    cout<<fixed<<setprecision(7)<<ans<<endl;
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