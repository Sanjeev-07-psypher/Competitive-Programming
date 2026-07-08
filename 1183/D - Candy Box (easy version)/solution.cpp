/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 08.07.2026 19:27:23
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
    vector<ll> v(n);
    for(auto &it:v) cin>>it;
    unordered_map<ll,ll> freq;
    for(auto &x:v){
        freq[x]++;
    }
    vector<pair<ll,ll>> p;
    for(auto &it: freq){
        p.push_back({it.second,it.first});
    }
 
    sort(p.rbegin(),p.rend());
    // for(auto x: p){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    ll ans=p[0].first;
    for(int i=1;i<p.size();i++){
        if(p[i].first>=p[i-1].first){
            p[i].first=p[i-1].first-1;
            if(p[i].first==0) break;
        } 
        ans+=p[i].first;
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