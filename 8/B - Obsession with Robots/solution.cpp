/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 07.06.2026 20:47:53
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
 
// --- Main Solve Function ---
void solve() {
    string s;
    cin>>s;
    vector<pair<int,int>> p;
    int x=0,y=0;
    p.push_back({x,y});
    for(char c:s){
        if(c=='L') x--;
        else if(c=='R') x++;
        else if(c=='U') y++;
        else y--;
        p.push_back({x,y});
    }
    int n=p.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int d=abs(p[i].first-p[j].first)+abs(p[i].second-p[j].second);
 
            if(j==i+1){
                if(d!=1){
                    cout<<"BUG"<<endl;
                    return ;
                }
            }
            else{
                if(d<=1){
                    cout<<"BUG"<<endl;
                    return ;
                }
            }
        }
    }
 
    cout<<"OK"<<endl;
 
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