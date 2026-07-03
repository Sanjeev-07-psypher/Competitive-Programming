/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 23.12.2025 21:11:10
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
    vector<int> a(n);
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    ll total = 0;
    for (int i=0;i<n-1;i++) {
        total += abs(a[i+1] - a[i]);
    }
 
    ll ans = total;
    ans = min(ans,total -abs(a[1]- a[0]));
    ans = min(ans,total-abs(a[n-1] -a[n-2]));
 
    for (int i=1;i<n-1;i++) {
        ll cur = total- abs(a[i] - a[i-1])- abs(a[i+1]- a[i])+abs(a[i+1]- a[i-1]);
        ans = min(ans, cur);
    }
    cout<<ans<<endl;
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