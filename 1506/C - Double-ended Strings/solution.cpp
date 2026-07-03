/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 10.03.2026 22:59:20
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
    string a,b;
    cin>>a>>b;
    int n=a.size();
    int m=b.size();
    int lcs=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=1;i+k<=n && j+k<=m;k++){
                if(a.substr(i,k)==b.substr(j,k)) lcs=max(lcs,k); 
            }
        }
    }
    cout<<n+m-2*lcs<<endl;
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