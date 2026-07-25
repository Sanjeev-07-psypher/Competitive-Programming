/**
 * author:  Sanjeev Kumar Gupta
 * created: 25.07.2026 22:03:23
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
 
struct Cand {
    ll val;
    int count;
    ll total_dist;
};
 
// --- Main Solve Function ---
void solve() {
    ll n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    vector<Cand> C;
    C.reserve(100);
 
    auto get_path = [&](ll x){
        vector<pair<ll, int>> path;
        path.reserve(100);
        int d = 0;
        while (x > 2) {
            path.pb({x, d});
            if (x % 2 == 0) x /= 2;
            else x += 1;
            d++;
        }
        
 
        if (x == 2) {
            path.pb({2, d});
            path.pb({1, d + 1});
        } else if (x == 1) {
            path.pb({1, d});
            path.pb({2, d + 1});
        }
        return path;
    };
 
    auto path0 = get_path(a[0]);
    for (auto p : path0) {
        C.pb({p.first, 1, p.second});
    }
 
    for (int i = 1; i < n; i++){
        auto path = get_path(a[i]);
        
        for (size_t j = 0; j < path.size(); j++){
            for (size_t k = 0; k < C.size(); k++){
                if (C[k].val == path[j].first){
                    C[k].count++;
                    C[k].total_dist += path[j].second;
                    break;
                }
            }
        }
    }
 
    ll ans = -1;
    for (auto& c : C){
        if (c.count == n){
            if (ans == -1 || c.total_dist < ans){
                ans = c.total_dist;
            }
        }
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