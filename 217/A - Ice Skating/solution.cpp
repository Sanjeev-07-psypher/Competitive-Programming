/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 05.06.2026 22:01:36
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
    }
 
    void dfs(int i,vector<bool> &visited){
        visited[i]=true;
        for(Edge e: adj[i]){
            if(!visited[e.dest]){
                dfs(e.dest,visited);
            }
        }
    }
};
 
// --- Main Solve Function ---
void solve() {
    ll n;
    cin>>n;
    Graph g(n);
    vector<pair<ll,ll>> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i].first>>p[i].second;
    }
 
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(p[i].first==p[j].first || p[i].second==p[j].second){
                g.addEdge(i,j);
                g.addEdge(j,i);
            }
        }
    }
 
    vector<bool> visited(n,false);
    ll ans=0;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            ans++;
            g.dfs(i,visited);
        }
    }
    cout<<ans-1<<endl;
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