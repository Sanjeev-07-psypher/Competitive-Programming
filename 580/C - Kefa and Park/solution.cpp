/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 09.06.2026 22:30:35
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
 
    void dfs(ll i,vector<bool>&visited, vector<ll>&v, ll &ans,ll m,ll catCount){
        visited[i]=true;
 
        if(v[i]==1) catCount++;
        else catCount=0;
 
        if(catCount>m) return;
        bool leaf = true;
        for(auto e: adj[i]){
            if(!visited[e.dest]){
                leaf=false;
                dfs(e.dest,visited,v,ans,m,catCount);
            }
        }
        if(leaf && i!=1) ans++;
    }
};
 
 
 
// --- Main Solve Function ---
void solve() {
    ll n,m;
    cin>>n>>m;
    Graph g(n+1);
    vector<ll> v(n+1);
    for(int i=1;i<=n;i++) cin>>v[i];
    for(int i=0;i<n-1;i++){
        ll x,y;
        cin>>x>>y;
        g.addEdge(x,y);
    }
 
    vector<bool> visited(n+1,false);
    ll ans=0;
    g.dfs(1,visited,v,ans,m,0);
    cout<<ans<<endl;
}
 
// --- Main Function ---
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}