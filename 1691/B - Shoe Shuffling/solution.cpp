/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 15.03.2026 22:08:47
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
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &it: v) cin>>it;
    map<int,int> mp;
    for(auto &x: v) mp[x]++;
    bool flag=true;
    if(n==1){
        cout<<-1<<endl;
        return;
    }
    for(int i=1;i<n;i++){
        if(v[i]!=v[i-1]){
            flag=false;
            break;
        }
    }
    if(!flag){
        for(auto p:mp){
            if(p.second==1){
                cout<<-1<<endl;
                return;
            }
        }
    }
    vector<vector<int>> pair(n,vector<int>(2));
    for(int i=0;i<n;i++){
        pair[i][0]=i+1;
        pair[i][1]=v[i];
    }
    for(int i=1;i<n;i++){
        if(pair[i][1]==pair[i-1][1]){
            int temp=pair[i][0];
            pair[i][0]=pair[i-1][0];
            pair[i-1][0]=temp;
        }
    }
    for(int i=0;i<n;i++){
        cout<<pair[i][0]<<" ";
    }
    cout<<endl;
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