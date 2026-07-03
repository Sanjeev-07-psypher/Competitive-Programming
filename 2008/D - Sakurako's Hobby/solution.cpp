/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 06.06.2026 16:37:35
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
void vin(vi &a, ll n) {
    a.resize(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
}
 
void pin(const vi &a) {
    for (size_t i = 0; i < a.size(); i++) {
        cout << a[i] << (i == a.size() - 1 ? "" : " ");
    }
    cout << endl;
}
 
class Edge{
    public:
    int src;
    int dest;
    Edge(int u,int v){
        src=u;
        dest=v;
    }
};
 
class Graph{
    public:
    int V;
    vector<vector<Edge>> adj;
    Graph(int V){
        this->V=V;
        adj.resize(V);
    }
 
    void addEdge(int u,int v){
        adj[u].push_back(Edge(u,v));
        adj[v].push_back(Edge(v,u));
    }
 
    void dfs(int i,vector<bool>&visited,vector<ll>&CurrCycle){
        visited[i]=true;
        CurrCycle.push_back(i);
        for(Edge e: adj[i]){
            if(!visited[e.dest]){
                dfs(e.dest,visited,CurrCycle);
            }
        }
    }
};
 
// --- Main Solve Function ---
void solve() {
    ll n;
    cin>>n;
    Graph g(n+1);
    vector<ll> v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    string s;
    cin>>s;
    for(int i=1;i<=n;i++){
        g.addEdge(i,v[i]);
    }
 
    vector<ll> ans(n+1);
    vector<bool> visited(n+1,false);
    for(int i=1;i<=n;i++){
        vector<ll> currCycle;
        if(!visited[i]){
            g.dfs(i,visited,currCycle);
            ll count=0;
            for(auto x: currCycle){
                if(s[x-1]=='0')count++;
            }
            for(auto x: currCycle){
                ans[x]=count;
            }
        }
    }
 
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
}
 
// --- Main Function ---
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}