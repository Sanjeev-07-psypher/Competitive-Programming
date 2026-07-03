/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 09.06.2026 18:33:19
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
 
bool check(ll val,ll idx, ll mid,ll x){
    return (val+(1LL*(idx+1)*(mid-1))<=x);
}
 
ll binarySearch(ll val,ll idx,ll x){
    ll l=1;
    ll h=1e9+5;
    ll ans=0;
    while(l<=h){
        ll mid=l+(h-l)/2;
        if(check(val,idx,mid,x)){
            ans=mid;
            l=mid+1;
        } else {
            h=mid-1;
        }
    }
    return ans;
}
 
// --- Main Solve Function ---
void solve() {
    ll n,x;
    cin>>n>>x;
    vi v(n);
    vin(v,n);
    srt(v);
    vector<ll> prefix(n);
    prefix[0]=v[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+v[i];
    }
    ll l=0;
    ll h=(x-v[0])*n;
    ll ans=0;
    for(int i=0;i<n;i++){
        ans+=binarySearch(prefix[i],i,x);
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