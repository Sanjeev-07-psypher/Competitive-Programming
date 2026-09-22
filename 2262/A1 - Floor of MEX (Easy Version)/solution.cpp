/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 21.09.2026 22:20:23
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
    vector<ll>b(n+1);
    for(ll i=1;i<=n;i++)cin>>b[i];
 
    vector<pair<ll,ll>>v;
    for(ll i=1;i<=n;i++){
        v.push_back({b[i]*i,(b[i]+1)*i-1});
    }
 
    vector<ll>d(n+1);
    for(auto x:v){
        ll l = x.first;
        ll r = x.second;
        d[min(n,l)]++;
        d[min(n,r+1)]--;
    }
 
    ll sum=0;
    vector<ll>ans;
    for(ll i=0;i<n;i++){
        sum+=d[i];
        if(sum==0)ans.push_back(i);
    }
 
    cout<<ans.size()<<endl;
    for(ll x:ans)cout<<x<<" ";
    cout<<endl;
 
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