/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 27.06.2026 19:40:05
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
 
ll sigma(ll n){
    ll ans = 1;
    for(ll p=2; p*p<=n; p++){
        if(n%p==0){
            ll term = 1;
            ll curr = 1;
            while(n%p==0){
                n/=p;
                curr*=p;
                term+=curr;
            }
            ans*=term;
        }
    }
    if(n>1){
        ans*=(1+n);
    }
    return ans;
}
 
// --- Main Solve Function ---
void solve() {
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto &it:v) cin>>it;
    for(int i=0;i<n-1;i++){
        ll mn=min(v[i],v[i+1]);
        v[i]-=mn;
        v[i+1]-=mn;
    }
    if(is_sorted(v.begin(),v.end())){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
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