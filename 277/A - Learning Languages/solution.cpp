    /**
     *    author:  Sanjeev Kumar Gupta
     *    created: 08.07.2026 22:01:35
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
 
    ll gcd(ll a, ll b){
        a=llabs(a);
        b=llabs(b);
        while(b!=0){
            ll r = a%b;
            a=b;
            b=r;
        }
        return a;
    }
 
    ll lcm(ll a, ll b){
    if(a==0 || b==0) return 0;
    return (a / gcd(a,b)) * b;
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
 
        void dfs(vector<bool>& visited,ll i){
            visited[i]=true;
            for(auto &e:adj[i]){
                if(!visited[e.dest]){
                    dfs(visited,e.dest);
                }
            }
        }
    };
 
 
 
    // --- Main Solve Function ---
    void solve() {
        ll n,m;
        cin>>n>>m;
        Graph g(m+1);
        vector<bool> act(m+1,false);
        ll z=0;
        for(int i=0;i<n;i++){
            ll k;
            cin>>k;
            if(k==0){
                z++;
                continue;
            }
            vector<ll> a(k);
            for(int j=0;j<k;j++){
                cin>>a[j];
                act[a[j]]=true;
            }
            for(int j=0;j<k-1;j++){
                g.addEdge(a[j],a[j+1]);
            }
        }
        vector<bool> visited(m+1,false);
        ll c=0;
        for(int i=1;i<=m;i++){
            if(act[i]&&!visited[i]){
                g.dfs(visited,i);
                c++;
            }
        }
        if(c==0){
            cout<<z<<endl;
        }else{
            cout<<(c-1)+z<<endl;
        }
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