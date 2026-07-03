/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 28.06.2026 20:23:25
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
    ll ans;
    Graph(int V){
        this->V=V;
        adj.resize(V);
        ans=0;
    }
    void addEdge(int u,int v){
        adj[u].push_back(Edge(u,v));
        adj[v].push_back(Edge(v,u));
    }
 
    ll dfs(ll u,ll p){
        ll md1=-1,md2=-1;
        for(auto e:adj[u]){
            ll v=e.dest;
            if(v==p) continue;
            ll d=dfs(v,u);
            if(d>md1){
                md2=md1;
                md1=d;
            } else if(d>md2){
                md2=d;
            }
        }
        if(md2!=-1){
            ans+=(md2+1);
        }
        return md1+1;
    }
 
};
 
ll n,m;
string rowDir,colDir;
 
bool dfs(ll sr,ll sc){
    vector<vector<bool>> vis(n,vector<bool>(m,false));
 
    function<void(ll,ll)> go=[&](ll r,ll c){
        vis[r][c]=true;
 
        if(rowDir[r]=='>'){
            if(c+1<m&&!vis[r][c+1])
                go(r,c+1);
        }else{
            if(c-1>=0&&!vis[r][c-1])
                go(r,c-1);
        }
 
        if(colDir[c]=='v'){
            if(r+1<n&&!vis[r+1][c])
                go(r+1,c);
        }else{
            if(r-1>=0&&!vis[r-1][c])
                go(r-1,c);
        }
    };
 
    go(sr,sc);
 
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            if(!vis[i][j])
                return false;
        }
    }
    return true;
}
 
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll x=0;
    for(int i=0;i<n-1;i++){
        if(s[i]!=s[i+1]) x++;
    }
    if(x==1){
        cout<<2<<endl;
    } else {
        cout<<1<<endl;
    }
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