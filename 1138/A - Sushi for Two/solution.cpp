/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 15.06.2026 21:18:27
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
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto &it :v) cin>>it;
    vector<pair<ll,ll>> p;
 
    bool one=false,two=false;
    if(v[0]==1) one=true;
    if(v[0]==2) two=true;
    ll count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(v[i]==1){
            if(!one) {
                p.pb({count2,2});
                count2=0;
                one=true;
                two=false;
 
            }
            count1++;
        } else {
            if(!two){
                p.pb({count1,1});
                count1=0;
                one=false;
                two=true;
            }
            count2++;
        }
    }
    if(!one) {
        p.pb({count2,2});
        count2=0;
        one=true;
        two=false;
    }
    if(!two){
        p.pb({count1,1});
        count1=0;
        one=false;
        two=true;
    }
 
    ll ans=0;
    for(int i=0;i<p.size()-1;i++){
        if(p[i].second!=p[i+1].second){
            ll mn=min(p[i].first,p[i+1].first);
            ans=max(ans,2*mn);
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