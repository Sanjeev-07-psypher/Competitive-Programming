/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 26.06.2026 20:38:09
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
};
 
// --- Main Solve Function ---
void solve() {
    ll n;
    cin>>n;
    Graph g(n+1);
    for(int i=0;i<n-1;i++){
        ll u,v;
        cin>>u>>v;
        g.addEdge(u,v);
    }
    vector<ll> color(n+1,-1);
    vector<ll> a,b;
    for(int i=1;i<=n;i++){
        if(color[i]!=-1)continue;
        queue<ll> q;
        q.push(i);
        color[i]=0;
        while(!q.empty()){
            ll u=q.front();
            q.pop();
            if(color[u]==0) a.push_back(u);
            else b.push_back(u);
 
            for(auto &e: g.adj[u]){
                if(color[e.dest]==-1){
                    color[e.dest]=color[u]^1;
                    q.push(e.dest);
                }
            }
        }
    }
 
    //b=black;
    ll black=b.size();
    // ll ans=0;
    // for(int i=0;i<a.size();i++){
    //     ll x=a[i];
    //     ll count=0;
    //     for(auto &e: g.adj[x]){
    //         count++;
    //     }
    //     ans+=(b.size()-count);
    // }
    cout<<a.size()*b.size()-(n-1)<<endl;
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