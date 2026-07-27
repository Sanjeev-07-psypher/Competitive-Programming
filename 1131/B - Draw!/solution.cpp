/**
 * author:  Sanjeev Kumar Gupta
 * created: 25.07.2026 22:03:23
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
const int mod=1e9+7;
 
// --- Type Definitions ---
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll,ll> ii;
typedef vector<ii> vp;
 
// --- Shorthand Macros ---
#define all(v) v.begin(),v.end()
#define srt(v) sort(all(v))
#define pb push_back
 
void solve(){
    ll n;
    cin>>n;
 
    ll pa=0,pb=0;
    ll ans=1;
 
    for(ll i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
 
        if(pa==pb){
            ans+=min(a,b)-max(pa,pb);
        }
        else{
            ans+=max(0LL,min(a,b)-max(pa,pb)+1);
        }
 
        pa=a;
        pb=b;
    }
 
    cout<<ans<<endl;
}
 
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t=1;
    while(t--){
        solve();
    }
 
    return 0;
}