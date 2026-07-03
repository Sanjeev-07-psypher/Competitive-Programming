/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 25.03.2026 23:29:47
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
 
// bool dfs(int i,int j,int desti,int destj,vector<vector<char>>&grid,vector<vector<bool>>&visited,int count,int n,int m,char currElement,bool flag){
//     if(i<0 || j<0 || i>=n || j>=m) return false;
//     if(grid[i][j]!=currElement) return false;
//     if(count>=4 && i==desti && j==destj){
//         // visited[i][j]=true;
//         // flag=true;
//         return true;
//     }
//     if(visited[i][j]) return false;
//     visited[i][j]=true;
//     if(dfs(i+1,j,desti,destj,grid,visited,count+1,n,m,currElement,flag)) return true;
//     if(dfs(i-1,j,desti,destj,grid,visited,count+1,n,m,currElement,flag)) return true;
//     if(dfs(i,j+1,desti,destj,grid,visited,count+1,n,m,currElement,flag)) return true;
//     if(dfs(i,j-1,desti,destj,grid,visited,count+1,n,m,currElement,flag)) return true;
 
//     visited[i][j]=false;
//     return false;
    
// }
 
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
 
bool dfs(int i,int j,int desti,int destj,vector<vector<char>>&grid,vector<vector<bool>>&visited,char currElement,int n,int m){
    visited[i][j]=true;
    for(int k=0;k<4;k++){
        int ci=i+dx[k];
        int cj=j+dy[k];
        if(ci>=0 && cj>=0 && ci<n && cj<m && grid[ci][cj]==currElement){
            if(!visited[ci][cj]){
                if(dfs(ci,cj,i,j,grid,visited,currElement,n,m)) return true;
            }
            else if(ci!=desti && cj!=destj) return true;
        }
    }
    return false;
}
 
// --- Main Solve Function ---
void solve() {
    ll n,m;
    cin>>n>>m;
    vector<vector<char>> grid(n,vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
    vector<vector<bool>> visited(n,vector<bool>(m,false));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!visited[i][j]){
                if(dfs(i,j,-1,-1,grid,visited,grid[i][j],n,m)){
                    cout<<"Yes"<<endl;
                    return;
                }
            }
        }
    }
    cout<<"No"<<endl;
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