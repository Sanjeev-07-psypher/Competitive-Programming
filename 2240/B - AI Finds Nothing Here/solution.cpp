/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 24.06.2026 20:16:27
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
 
const ll MOD=998244353;
ll expp(ll b,ll e){
    ll res=1;
    b%=MOD;
    while(e>0){
        if(e%2==1){
            res=(res*b)%MOD;
        }
        b=(b*b)%MOD;
        e/=2;
    }
    return res;
}
 
// --- Main Solve Function ---
void solve() {
    ll n,m,r,c;
    cin>>n>>m>>r>>c;
    ll x=(n*m)-((n-r+1)*(m-c+1));
    ll ans=expp(2,x);
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