/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 24.02.2026 23:12:29
**/
 
#include <bits/stdc++.h>
 
// --- For Debugging ---
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
// -----------------
 
using namespace std;
 
#define ll long long int
#define endl '
'
 
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
 
const int N = 2e5+5;
 
// --- Main Solve Function ---
void solve() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj(n+1);
    vector<bool> vis(n+1,false);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
    int ans =0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            stack<int> st;
            st.push(i);
            vis[i]=true;
            bool isCycle=true;
            int nodes=0;
 
            while(st.size()>0){
                int curr = st.top();
                st.pop();
                nodes++;
                if(adj[curr].size()!=2){
                    isCycle=false;
                }
                for(auto neigh: adj[curr]){
                    if(!vis[neigh]){
                        vis[neigh]=true;
                        st.push(neigh);
                    }
                }
            }
            if(isCycle && nodes>=3) ans++;
        }
    }
    cout<<ans<<endl;
}
 
//--- Main Function ---
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }
 
    return 0;
}