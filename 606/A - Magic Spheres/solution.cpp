/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 16.06.2026 23:01:35
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
    ll a,b,c,x,y,z;
    cin>>a>>b>>c;
    cin>>x>>y>>z;
    ll xtra=0,need=0;
 
    xtra+=max(0LL,a-x)/2;
    xtra+=max(0LL,b-y)/2;
    xtra+=max(0LL,c-z)/2;
 
    need+=max(0LL,x-a);
    need+=max(0LL,y-b);
    need+=max(0LL,z-c);
 
    if(xtra>=need) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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