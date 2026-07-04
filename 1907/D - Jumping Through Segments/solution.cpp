/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 04.07.2026 18:35:57
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
 
bool check(vector<pair<ll,ll>>&v,ll mid){
    ll L=0,R=0;
    for(int i=0;i<v.size();i++){
        ll l=v[i].first;
        ll r=v[i].second;
        L=max(L-mid,l);
        R=min(R+mid,r);
        if(L>R) return false;
    }
    return true;
}
 
// --- Main Solve Function ---
void solve() {
    ll n;
    cin>>n;
    vector<pair<ll,ll>> v;
    for(int i=0;i<n;i++){
        ll l,r;
        cin>>l>>r;
        v.push_back({l,r});
    }
    ll l=0;
    ll h=1e9;
    ll ans=h;
    while(l<=h){
        ll mid=l+(h-l)/2;
        if(check(v,mid)){
            h=mid-1;
            ans=mid;
        } else {
            l=mid+1;
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