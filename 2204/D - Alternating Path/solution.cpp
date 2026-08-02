#include<bits/stdc++.h>
using namespace std;
 
void dfs(int u,vector<vector<int>>&adj,vector<int>&col,int &a,int &b,bool &ok){
    if(col[u]==0)a++;
    else b++;
    for(int v:adj[u]){
        if(col[v]==-1){
            col[v]=col[u]^1;
            dfs(v,adj,col,a,b,ok);
        }
        else if(col[v]==col[u]){
            ok=false;
        }
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
 
    while(t--){
        int n,m;
        cin>>n>>m;
 
        vector<vector<int>>adj(n+1);
 
        for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
 
        vector<int>col(n+1,-1);
        int ans=0;
 
        for(int i=1;i<=n;i++){
            if(col[i]==-1){
                int a=0,b=0;
                bool ok=true;
                col[i]=0;
                dfs(i,adj,col,a,b,ok);
                if(ok)ans+=max(a,b);
            }
        }
 
        cout<<ans<<"
";
    }
}