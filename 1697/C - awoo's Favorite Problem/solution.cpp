/**
 * author:  Sanjeev Kumar Gupta
 * created: 22.07.2026 22:19:32
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
    string s, t;
    cin >> s >> t;
    vector<pair<char, int>> pos_s, pos_t;
    for (int i = 0; i < n; i++) {
        if (s[i] != 'b') pos_s.pb({s[i], i});
        if (t[i] != 'b') pos_t.pb({t[i], i});
    }
    if (pos_s.size() != pos_t.size()) {
        cout << "NO" << endl;
        return;
    }
    for (size_t i = 0; i < pos_s.size(); i++) {
        if (pos_s[i].first != pos_t[i].first) {
            cout << "NO" << endl;
            return;
        }
        if (pos_s[i].first == 'a' && pos_s[i].second > pos_t[i].second) {
            cout << "NO" << endl;
            return;
        }
        if (pos_s[i].first == 'c' && pos_s[i].second < pos_t[i].second) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
 
// --- Main Function ---
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int q = 1;
    cin >> q;
    while (q--) {
        solve();
    }
 
    return 0;
}