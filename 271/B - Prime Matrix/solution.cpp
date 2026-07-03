/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 17.06.2026 21:31:30
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
void solve(){
    ll n,m;
    cin>>n>>m;
 
    ll N=200000;
    vector<bool> p(N+1,true);
    p[0]=p[1]=false;
 
    for(ll i=2;i*i<=N;i++){
        if(p[i]){
            for(ll j=i*i;j<=N;j+=i) p[j]=false;
        }
    }
 
    vector<ll> nxt(N+1);
    ll last=-1;
 
    for(ll i=N;i>=0;i--){
        if(p[i]) last=i;
        nxt[i]=last;
    }
 
    vector<vector<ll>> c(n,vector<ll>(m));
 
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            ll x;
            cin>>x;
            c[i][j]=nxt[x]-x;
        }
    }
 
    ll ans=LLONG_MAX;
 
    for(ll i=0;i<n;i++){
        ll s=0;
        for(ll j=0;j<m;j++) s+=c[i][j];
        ans=min(ans,s);
    }
 
    for(ll j=0;j<m;j++){
        ll s=0;
        for(ll i=0;i<n;i++) s+=c[i][j];
        ans=min(ans,s);
    }
 
    cout<<ans<<endl;
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