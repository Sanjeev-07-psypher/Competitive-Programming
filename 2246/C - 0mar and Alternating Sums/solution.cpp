/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 07.06.2026 20:34:03
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
 
const ll MOD = 1e9 + 7;
 
ll power(ll base, ll exp){
    ll res = 1;
    base %= MOD;
    while(exp>0){
        if(exp%2==1) res=(res * base) % MOD;
        base=(base*base)%MOD;
        exp/= 2;
    }
    return res;
}
 
// --- Main Solve Function ---
void solve() {
    ll n;
    cin>>n;
 
    int minus=0;
    map<ll,ll> freq;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x==-1) minus++;
        else freq[x]++;
    }
    ll p=1,k=0;
    for(auto &x: freq){
        p=(p*power(2,x.second-1))%MOD;
        if(freq.count(x.first+1)) k++;
    }
 
    ll ans=0;
    if(minus==0){
        ans=p;
    } else {
        ll c= power(2,minus-1);
        ans=(c*p%MOD)*(1+k)%MOD;
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