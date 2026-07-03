/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 21.08.2025 21:42:20
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
    long long n;
    cin >> n;
 
    vector<long long> v;
 
    for (int k=1;k<= 18;k++) {
        long long x = 1;
        for (int j =0;j<k; j++) x *= 10; 
        x += 1; 
        if (n % x == 0) {
            long long y= n / x;
            v.push_back(y);
        }
    }
 
    if (v.size()==0) {
        cout << 0 << "
";
    } else {
        sort(v.begin(), v.end());
        cout << v.size() << "
";
        for (int i=0;i<v.size();i++) cout << v[i] << " ";
        cout << "
";
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