/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 05.07.2026 20:06:07
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
 
bool check(vector<ll> &v,ll mid,ll k){
    ll t=0;
    for(auto x:v){
        if(x>mid){
            // freq of same task is more 
            t+=mid;
        } else {
            t+= x + (mid-x)/2; 
        }
    }
    return t>=k;
}
 
// --- Main Solve Function ---
void solve() {
    ll n,m;
    cin>>n>>m;
    vector<ll> freq(n,0);
    for(int i=0;i<m;i++){
        ll x;
        cin>>x;
        freq[x-1]++;
    }
 
    ll l=1;
    ll h=2*m;
    ll ans=h;
    while(l<=h){
        ll mid=l+(h-l)/2;
        if(check(freq,mid,m)){
            ans=mid;
            h=mid-1;
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