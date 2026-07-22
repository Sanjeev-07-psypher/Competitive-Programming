/**
 * author:  Sanjeev Kumar Gupta
 * created: 14.07.2026 20:29:38
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
#define ld long double
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
 
ll gcd(ll a, ll b){
    a=llabs(a);
    b=llabs(b);
    while(b!=0){
        ll r = a%b;
        a=b;
        b=r;
    }
    return a;
}
 
ll lcm(ll a, ll b){
   if(a==0 || b==0) return 0;
   return (a / gcd(a,b)) * b;
}
 
// --- Main Solve Function ---
void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> idx;
    char max_char = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] >= max_char) {
            max_char = s[i];
            idx.pb(i);
        }
    }
    reverse(all(idx));
    int m = idx.size();
    string t = "";
    for (int i = 0; i < m; i++) {
        t += s[idx[i]];
    }
    sort(all(t));
    for (int i = 0; i < m; i++) {
        s[idx[i]] = t[i];
    }
    if (!is_sorted(all(s))) {
        cout << -1 << endl;
        return;
    }
    int max_cnt = 0;
    for (int i = 0; i < m; i++) {
        if (t[i] == t.back()) max_cnt++;
    }
    cout << m - max_cnt << endl;
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