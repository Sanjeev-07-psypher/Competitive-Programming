/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 08.06.2026
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
#define lld long double
#define endl '
'
const int mod = 1e9+7;
 
// --- Type Definitions ---
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll,ll> ii;
typedef vector<ii> vp;
 
// --- Shorthand Macros ---
#define all(v) v.begin(),v.end()
#define srt(v) sort(all(v))
#define pb push_back
 
// --- I/O Helper Functions ---
void vin(vi &a,ll n){
    a.resize(n);
    for(ll i=0;i<n;i++) cin>>a[i];
}
 
void pin(const vi &a){
    for(size_t i=0;i<a.size();i++){
        cout<<a[i]<<(i+1==a.size()?"":" ");
    }
    cout<<endl;
}
 
// --- Main Solve Function ---
void solve(){
    ll n;
    cin>>n;
 
    vi p(n);
    vin(p,n);
 
    ll ans=0;
 
    for(ll i=0;i<n-1;i++){
        ll d=abs(p[i]-p[i+1]);
 
        if(p[i]%d==0) ans++;
    }
 
    cout<<ans<<endl;
}
 
// --- Main Function ---
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t=1;
    cin>>t;
 
    while(t--){
        solve();
    }
 
    return 0;
}