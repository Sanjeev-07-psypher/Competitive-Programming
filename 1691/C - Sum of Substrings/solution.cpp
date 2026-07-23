/**
 * author:  Sanjeev Kumar Gupta
 * created: 23.07.2026 22:58:32
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
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll cnt = 0;
    ll first = -1, last = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            cnt++;
            if (first == -1) first = i;
            last = i;
        }
    }
    if (cnt == 0) {
        cout << 0 << endl;
        return;
    }
    ll ans = 11 * cnt;
    if (cnt == 1) {
        if (k >= n - 1 - last) {
            ans -= 10;
        } else if (k >= first) {
            ans -= 1;
        }
    } else {
        if (k >= n - 1 - last) {
            ans -= 10;
            k -= (n - 1 - last);
        }
        if (k >= first) {
            ans -= 1;
        }
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