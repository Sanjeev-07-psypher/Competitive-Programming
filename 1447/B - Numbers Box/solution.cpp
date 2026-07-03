/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 06.02.2026 20:05:52
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
 
// --- Main Solve Function ---
void solve() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> grid(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
 
    int min_=INT_MAX;
    int zeroCount=0;
    int negCount=0;
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]<0) negCount++;
            if(grid[i][j]==0) zeroCount++;
            if(grid[i][j]!=0){
                min_=min(min_,abs(grid[i][j]));
            }
            sum+=abs(grid[i][j]);
        }
    }
    if(zeroCount>0) cout<<sum<<endl;
    else{
        if(negCount%2==0){
            cout<<sum<<endl;
        } else{
            cout<<sum-2*min_<<endl;
        }
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