/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 06.06.2026 17:24:16
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
};
 
// --- Main Solve Function ---
void solve() {
    ll n,m;
    cin>>n>>m;
    Graph g(n+1);
    while(m--){
        ll a,b;
        cin>>a>>b;
        g.addEdge(a,b);
    }
 
    ll node=-1;
    for(int i=1;i<=n;i++){
        if(g.adj[i].size()==1){
            node=g.adj[i][0].dest;
            break;
        }
    }
    vector<ll> neigh;
    for(Edge e: g.adj[node]){
        neigh.push_back(e.dest);
    }
    vector<pair<ll,ll>> neighCount;
    for(auto x: neigh){
        neighCount.push_back({g.adj[x].size(),x});
    }
    sort(neighCount.rbegin(),neighCount.rend());
 
    cout<<neighCount[0].first<<" "<<g.adj[node].size()-1<<endl;
}
 
//--- Main Function ---
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