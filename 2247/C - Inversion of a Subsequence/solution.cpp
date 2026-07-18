/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 14.07.2026 20:29:38
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
    cin>>n;
    vector<ll> a(n),b(n);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
    ll _11=0,_10=0,_01=0,_00=0;
    for(int i=0;i<n;i++){
        if(a[i] && b[i]) _11++;
        else if(!a[i] && !b[i]) _00++;
        else if(!a[i] && b[i]) _01++;
        else if(a[i] && !b[i]) _10++;
 
    }
 
    if(_10==0 && _01==0){
        cout<<0<<endl;
        return;
    }
    if(_10%2!=0){
        cout<<1<<endl;
        return;
    }
    if(_10>0){
        cout<<2<<endl;
        return;
    }
    if(_11>=1 && _00>=1){
        cout<<2<<endl;
        return;
    }
    cout<<-1<<endl;
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