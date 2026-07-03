/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 03.06.2026 19:40:10
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
 
// --- Main Solve Function --
void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(auto &it: v) cin>>it;
    srt(v);
    ll sum = accumulate(v.begin(),v.end(),0LL);
 
    vector<ll> pref(n+1, 0);
    for (int i=0;i<n;i++){
        pref[i+1] = pref[i]+v[i];
    }
    ll total = pref[n];
    ll ans = 0;
 
    for (int i=0;i<=k;i++){
        if (2*i>n||(k-i)>n) continue;
 
        ll removed=pref[2*i] + (pref[n] - pref[n - (k - i)]);
        ans = max(ans,total-removed);
    }
 
    cout << ans << endl;
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