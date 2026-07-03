/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 23.12.2025 13:27:40
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
 
int point(int i, int j){
    if(i==0 || i==9 || j==0 || j==9) return 1;
    else if(i==1 || i==8 || j==1 || j==8) return 2;
    else if(i==2 || i==7 || j==2|| j==7) return 3;
    else if(i==3 || i==6 || j==3 || j==6) return 4;
    else return 5;
}
 
// --- Main Solve Function ---
void solve() {
    vector<string> grid(10); //2d character grid
    int points=0;
    for(int i=0;i<10;i++){
        cin>>grid[i];
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(grid[i][j]=='X'){
                points += point(i,j);
            }
        }
    }
    cout<<points<<endl;
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