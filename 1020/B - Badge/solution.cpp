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
void vin(vi &a, ll n){
    a.resize(n);
    for(ll i=0;i<n;i++) cin>>a[i];
}
 
void pin(const vi &a){
    for(size_t i=0;i<a.size();i++){
        cout<<a[i]<<(i==a.size()-1?"":" ");
    }
    cout<<endl;
}
 
// --- Main Solve Function ---
void solve(){
    ll n;
    cin>>n;
    vector<ll> p(n+1);
    for(ll i=1;i<=n;i++) cin>>p[i];
    for(ll start=1;start<=n;start++){
        vector<ll> vis(n+1,0);
        ll cur=start;
        while(!vis[cur]){
            vis[cur]=1;
            cur=p[cur];
        }
        cout<<cur<<" ";
    }
    cout<<endl;
}
 
// --- Main Function ---
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t=1;
    while(t--){
        solve();
    }
 
    return 0;
}