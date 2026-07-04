/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 04.07.2026 17:12:46
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
    ll n,m;
    cin>>n>>m;
    vector<ll> v(n);
    for(auto &it:v) cin>>it;
    vector<ll> trailZero(n,0);
    ll totalDigs=0;
    for(int i=0;i<n;i++){
        while(v[i]%10==0){
            trailZero[i]++;
            totalDigs++;
            v[i]/=10;
        }
        while(v[i]>0){
            totalDigs++;
            v[i]/=10;
        }
    }
    sort(trailZero.rbegin(),trailZero.rend());
    for(int i=0;i<n;i+=2){
        totalDigs-=trailZero[i];
    }
 
    if(totalDigs>m){
        cout<<"Sasha"<<endl;
    } else {
        cout<<"Anna"<<endl;
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