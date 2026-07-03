/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 11.06.2026 16:01:00
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
//--- Type Definitions ---
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
 
bool check(vector<ll>&n,vector<ll>&p,vector<ll>&count,ll k,ll mid){
    for(int i=0;i<3;i++){
        if(n[i]<count[i]*mid){
            ll rem=count[i]*mid-n[i];
            ll req=rem*p[i];
            if(req<=k){
                k-=req;
            } else return false;
        } 
    }
    return true;
}
 
//--- Main Solve Function ---
void solve() {
    string s;
    cin>>s;
    vector<ll> n(3),p(3),count(3,0);
    ll k;
    for(auto &it: n) cin>>it;
    for(auto &it: p) cin>>it;
    cin>>k;
    for(int i=0;i<s.size();i++){
        if(s[i]=='B') count[0]++;
        else if(s[i]=='S') count[1]++;
        else count[2]++;
    }
    ll l=0;
    ll h=1e14;
    ll ans=l;
    while(l<=h){
        ll mid=l+(h-l)/2;
        if(check(n,p,count,k,mid)){
            ans=mid;
            l=mid+1;
        } else {
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