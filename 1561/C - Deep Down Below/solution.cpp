/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 21.06.2026 14:12:56
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
 
bool check(vector<pair<ll,ll>> &caves, ll n, ll mid){
    ll count=mid;
    for(auto x:caves){
        if(count<x.first){
            return false;
        }
        count+=x.second;
    }
    return true;
}
 
// --- Main Solve Function ---
void solve() {
    ll n;
    cin>>n;
    vector<pair<ll,ll>> caves;
    for(int i=0;i<n;i++){
        ll m;
        cin>>m;
        ll req=0;
        for(int j=0;j<m;j++){
            ll x;
            cin>>x;
            req=max(req,x-j+1);
        }
        caves.push_back({req,m});
    }
    srt(caves);
    ll l=0;
    ll h=1e18;
    ll ans=h;
    while(l<=h){
        ll mid=l+(h-l)/2;
        if(check(caves,n, mid)){
            ans=mid;
            h=mid-1;
        } else {
            l=mid+1;
        }
    }
    cout<<ans<<endl;
}
 
//--- Main Function ---
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