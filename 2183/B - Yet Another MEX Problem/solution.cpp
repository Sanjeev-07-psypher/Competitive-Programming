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
 
// --- Main Solve Function ---
void solve(){
    ll n,k;
    cin>>n>>k;
 
    vi a(n);
    for(auto &it:a) cin>>it;
 
    vector<int> freq(n+2,0);
 
    for(auto x:a){
        if(x<=n) freq[x]++;
    }
 
    ll mex=0;
    while(freq[mex]) mex++;
 
    cout<<min(mex,k-1)<<endl;
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