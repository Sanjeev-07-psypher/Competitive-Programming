/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 10.06.2026 14:23:00
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
 
// --- Main Solve Function ---
void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(auto &it:v) cin>>it;
    srt(v);
 
    ll ans=0;
    map<ll,ll> mp;
    for(auto &x:v) mp[x]++;
 
    vector<pair<ll,ll>> p;
    for(auto x:mp){
        p.push_back({x.first,x.second});
    }
 
    ll m=p.size();
    ll l=0,curr=0;
 
    for(int r=0;r<m;r++){
        curr += p[r].second;
        while(l<r && p[r].first-p[r-1].first>1){
            curr-=p[l].second;
            l++;
 
            while(l<r){
                curr-=p[l].second;
                l++;
            }
        }
        while(r-l+1>k){
            curr-=p[l].second;
            l++;
        }
        ans=max(ans,curr);
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