/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 01.06.2026 18:58:39
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
    ll n,m;
    cin>>n>>m;
    ll sum=0;
    vector<vector<ll>> v(m,vector<ll>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[j][i];
        }
    }
    for(int j=0;j<m;j++){
        sort(v[j].begin(),v[j].end());
        for(int i=0;i<n;i++){
            sum += v[j][i]*(2*i-n+1);
        }
    }
    cout<<sum<<endl;
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