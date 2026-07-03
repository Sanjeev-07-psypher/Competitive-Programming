/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 24.06.2026
**/
 
#include <bits/stdc++.h>
 
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
 
using namespace std;
 
#define ll long long int
#define ld long double
#define endl '
'
const int mod = 1e9+7;
 
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll,ll> ii;
typedef vector<ii> vp;
 
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v))
#define pb push_back
 
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
 
void solve(){
    ll sum=0,x;
    for(ll i=0;i<4;i++){
        cin>>x;
        sum+=x;
    }
    cout<<15-sum<<endl;
}
 
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t=1;
    while(t--) {
        solve();
    }
 
    return 0;
}