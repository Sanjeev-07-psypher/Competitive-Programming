/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 25.03.2026 17:45:21
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
 
int dfs(int i,int j,vector<vector<int>>& v,vector<vector<bool>>& visited,int n,int m){
    if(i<0 || j<0 || i>=n || j>=m) return 0;
    if(visited[i][j]) return 0;
    if(v[i][j]==0) return 0;
    ll localAns=v[i][j];
    visited[i][j]=true;
    localAns+=dfs(i+1,j,v,visited,n,m);
    localAns+=dfs(i-1,j,v,visited,n,m);
    localAns+=dfs(i,j+1,v,visited,n,m);
    localAns+=dfs(i,j-1,v,visited,n,m);
    return localAns;
}
 
// --- Main Solve Function ---
void solve() {
   int n,m;
   cin>>n>>m;
   vector<vector<int>> v(n,vector<int>(m));
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>v[i][j];
    }
   }
   vector<vector<bool>> visited(n,vector<bool>(m,false));
   ll ans=0;
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(v[i][j]!=0){
            if(!visited[i][j]){
                ll currAns=dfs(i,j,v,visited,n,m);
                ans=max(ans,currAns);
            }
        }
    }
   }
   cout<<ans<<endl;
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