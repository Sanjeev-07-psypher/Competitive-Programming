/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 23.03.2026 17:47:03
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
    ll n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    vector<ll> queries(m);
    for(auto &it:queries) cin>>it;
    string c;
    cin>>c;
    sort(queries.begin(),queries.end());
    sort(c.begin(),c.end());
    vector<bool> visited(n+1,false);
    int j=0;
    for(int i=0;i<m;i++){
        if(!visited[queries[i]]){
            s[queries[i]-1]=c[j];
            j++;
            visited[queries[i]]=true;
        }
    }
    cout<<s<<endl;
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