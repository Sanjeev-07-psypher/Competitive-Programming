/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 10.06.2026 17:36:55
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
 
bool check(vector<pair<ll,ll>>&p,ll mid, ll k){
    ll count=0;
    ll ans=0;
    for(auto x:p){
        if(x.second/x.first<mid){
            ll rem=1LL*mid*x.first-x.second;
            if(rem>k) return false;
            k-=rem;
        }
    }  
    return true; 
}
 
// --- Main Solve Function ---
void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n),b(n);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
 
    vector<pair<ll,ll>> p;
    for(int i=0;i<n;i++){
        p.push_back({a[i],b[i]});
    }
    sort(p.begin(),p.end());
    ll l=0;
    ll h=1e10;
    ll ans=l;
    while(l<=h){
        ll mid=l+(h-l)/2;
        if(check(p,mid,k)){
            ans=mid;
            l=mid+1;
        } else{
            h=mid-1;
        }
    }
    cout<<ans<<endl;
 
}
 
// --- Main Function ---
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}