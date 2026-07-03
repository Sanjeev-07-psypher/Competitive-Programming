/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 28.03.2026 21:46:20
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
    for(int i=0;i<=n;i++){
        //spaces
        for(int j=n-1-i;j>=0;j--){
            cout<<"  ";
        }
        //left part
        for(int j=0;j<=i;j++){
            cout<<j;
            if (i > 0 || j < i) cout << " ";
        }
        //right part
        for(int j=i-1;j>=0;j--){
            cout<<j;
            if (j > 0) cout << " ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"  ";
        }
        //left
        for(int j=0;j<n-i;j++){
            cout<<j;
            if ((n - i - 1 > 0) || (j < n - i - 1)) cout << " ";
        }
        //right
        for(int j=n-2-i;j>=0;j--){
            cout<<j;
            if (j > 0) cout << " ";
        }
        cout<<endl;
    }
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