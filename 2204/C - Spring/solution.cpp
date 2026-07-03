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
 
ll lcm2(ll a,ll b){
    return a/__gcd(a,b)*b;
}
 
// --- Main Solve Function ---
void solve(){
    ll a,b,c,m;
    cin>>a>>b>>c>>m;
 
    ll ab=lcm2(a,b);
    ll ac=lcm2(a,c);
    ll bc=lcm2(b,c);
    ll abc=lcm2(ab,c);
 
    ll A=m/a;
    ll B=m/b;
    ll C=m/c;
 
    ll AB=m/ab;
    ll AC=m/ac;
    ll BC=m/bc;
 
    ll ABC=m/abc;
 
    ll alice=
    6*(A-AB-AC+ABC)+
    3*(AB-ABC)+
    3*(AC-ABC)+
    2*ABC;
 
    ll bob=
    6*(B-AB-BC+ABC)+
    3*(AB-ABC)+
    3*(BC-ABC)+
    2*ABC;
 
    ll carol=
    6*(C-AC-BC+ABC)+
    3*(AC-ABC)+
    3*(BC-ABC)+
    2*ABC;
 
    cout<<alice<<" "<<bob<<" "<<carol<<endl;
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