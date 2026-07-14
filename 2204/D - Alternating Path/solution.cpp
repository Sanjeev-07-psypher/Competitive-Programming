/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 13.07.2026
**/
 
#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
 
void solve(){
    ll n,m;
    cin>>n>>m;
 
    vector<vector<ll>> adj(n+1);
 
    for(ll i=0;i<m;i++){
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
    vector<ll> color(n+1,-1);
    ll ans=0;
 
    for(ll i=1;i<=n;i++){
        if(color[i]!=-1) continue;
 
        queue<ll> q;
        q.push(i);
        color[i]=0;
 
        ll cnt0=1,cnt1=0;
        bool bip=true;
 
        while(!q.empty()){
            ll u=q.front();
            q.pop();
 
            for(auto v:adj[u]){
                if(color[v]==-1){
                    color[v]=color[u]^1;
 
                    if(color[v]==0) cnt0++;
                    else cnt1++;
 
                    q.push(v);
                }
                else if(color[v]==color[u]){
                    bip=false;
                }
            }
        }
 
        if(bip) ans+=max(cnt0,cnt1);
    }
 
    cout<<ans<<endl;
}
 
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll t;
    cin>>t;
 
    while(t--){
        solve();
    }
 
    return 0;
}