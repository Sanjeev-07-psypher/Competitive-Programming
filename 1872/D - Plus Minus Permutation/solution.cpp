/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 01.06.2026 11:59:48
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
 
ll gcd(ll a, ll b){
    return b == 0 ? a : gcd(b, a % b);
}
 
ll lcm(ll a, ll b){
    if (a==0 || b==0) return 0;
    return (a / gcd(a, b)) * b; 
}
 
// --- Main Solve Function ---
void solve() {
    ll n, x,y;
    cin>>n>>x>>y;
 
    ll common = n/(lcm(x,y));
    x=n/x - common;
    y=n/y - common;
 
    ll ySum= (y*(y+1))/2;
    ll xSum= (n*(n+1))/2 - ((n-x)*((n-x)+1))/2;
    cout<<xSum-ySum<<endl;
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