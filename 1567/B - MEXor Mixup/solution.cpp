/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 17.03.2026 18:06:37
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
 
ll xorTill(ll a){
    ll x=a%4;
    if(x==0) return a;
    else if(x==1) return 1;
    else if(x==2) return a+1;
    else return 0;
}
 
// --- Main Solve Function ---
void solve() {
    ll a,b;
    cin>>a>>b;
    ll x=xorTill(a-1);
    if(x==b){
        cout<<a<<endl;
    }
    else if((x^b)!=a){
        cout<<a+1<<endl;
    } else cout<<a+2<<endl;
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