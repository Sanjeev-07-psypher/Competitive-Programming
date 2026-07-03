/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 06.06.2026 18:28:08
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
 
// --- Main Solve Function ---
void solve() {
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto &it:v) cin>>it;
 
    priority_queue<pair<ll,ll>> p;
    for(int i=0;i<n;i++){
        if(v[i]>0)
            p.push({v[i],i+1});
    }
 
    vector<pair<ll,ll>> ans;
 
    while(p.size()>=2){
        auto x = p.top();
        p.pop();
        auto y = p.top();
        p.pop();
 
        ans.push_back({x.second,y.second});
        x.first-=1;
        y.first-=1;
 
        if(x.first>0) p.push(x);
        if(y.first>0) p.push(y);
        
 
    }
 
    cout<<ans.size()<<endl;
    for(auto x: ans){
        cout<<x.first<<" "<<x.second<<endl;
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