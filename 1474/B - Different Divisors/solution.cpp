/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 17.03.2026 23:49:37
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
 
bool isPrime(ll n) {
    if(n<=1) return false;
    if(n<=3) return true;
 
    if(n%2==0||n%3==0) return false;
 
    for(ll i=5;i*i<=n;i+= 6) {
        if(n%i==0 ||n%(i+2)==0)
            return false;
    }
    return true;
}
 
// --- Main Solve Function ---
void solve() {
    ll d;
    cin>>d;
    ll p=d+1;
    while(true){
        if(!isPrime(p)) p++;
        else break;
    }
    ll ans = pow(p,3);
    ll q = d+p;
    while(true){
        if(!isPrime(q)) q++;
        else break;
    }
    ll ans2=p*q;
    cout<<min(ans,ans2)<<endl;
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