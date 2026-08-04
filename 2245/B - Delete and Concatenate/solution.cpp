/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 03.08.2026 20:19:02
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
 
void vin(vi &a,ll n){
    a.resize(n);
    for(ll i=0;i<n;i++) cin>>a[i];
}
 
void solve(){
    ll n,c;
    cin>>n>>c;
 
    vi a;
    vin(a,n);
 
    ll ans=0;
    for(auto x:a) ans+=x-c;
 
    srt(a);
 
    int l=0,r=n-1;
    while(l<r){
        if(a[l]<c){
            ans+=c-a[l];
            l++;
            r--;
        }
        else break;
    }
 
    cout<<ans<<endl;
}
 
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
 
    while(t--){
        solve();
    }
 
    return 0;
}