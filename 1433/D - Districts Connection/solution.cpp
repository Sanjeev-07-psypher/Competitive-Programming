/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 04.06.2026 17:32:53
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
    for(auto &it: v) cin>>it;
    vector<pair<ll,ll>> p;
    for(int i=0;i<n;i++){
        p.push_back({v[i],i+1});
    }
    srt(p);
    bool allSame=true;
    for(int i=0;i<n-1;i++){
        if(v[i]!=v[i+1]){
            allSame=false;
            break;
        }
    }
    if(allSame){
        cout<<"NO"<<endl;
        return;
    }
 
    ll count=0;
    ll l=0,r=1;
    cout<<"YES"<<endl;
    while(r!=n){
        if(count==n-1) break;
        if(p[l].first!=p[r].first){
            cout<<p[l].second<<" "<<p[r].second<<endl;
            count++;
        }
        r++;
    }
    r=n-1;
    l++;
    while(count<n-1){
        cout<<p[l].second<<" "<<p[r].second<<endl;
        count++;
        l++;
    }
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