/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 22.12.2025 15:45:22
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
    cin >> n;
 
    string str;
    cin >> str;
 
    int x = 0, max = 0;
    int i = 0;
    bool flag = true;
 
    while (i < str.length()) {
        if (str[i] == '.') {
            x++;
        } else {
            x = 0;
        }
        if (x >= 3) {
            flag = false;
        }
        i++;
    }
 
    i = 0;
    while (i < str.length()) {
        if (str[i] == '.') max++;
        i++;
    }
 
    if (!flag) {
        cout << 2 << endl;
    } else {
        if (max == 0) cout << 0 << endl;
        else cout << max << endl;
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