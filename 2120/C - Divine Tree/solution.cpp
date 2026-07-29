#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve(){
    ll n,m;
    cin>>n>>m;
 
    ll root=-1;
    for(ll r=1;r<=n;r++){
        ll mn=n+r-1;
        ll mx=n*r-r*(r-1)/2;
        if(m>=mn&&m<=mx){
            root=r;
            break;
        }
    }
 
    if(root==-1){
        cout<<-1<<'
';
        return;
    }
 
    vector<ll> par(n+1,1);
    par[root]=0;
 
    if(root!=1) par[1]=root;
 
    ll extra=m-(n+root-1);
 
    for(ll i=root+1;i<=n&&extra>=root-1;i++){
        par[i]=root;
        extra-=root-1;
    }
 
    for(ll i=root-1;i>=2;i--){
        if(extra>=i-1){
            par[i]=root;
            extra-=i-1;
        }
    }
 
    cout<<root<<'
';
    for(ll i=1;i<=n;i++){
        if(i==root) continue;
        cout<<par[i]<<" "<<i<<'
';
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--) solve();
 
    return 0;
}