/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 09.06.2026 17:54:36
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
 
bool check(vector<ll>&v,ll mid,ll c){
    ll sum=0;
    for(auto num:v){
        ll p= 2*mid+num;
        sum+= p*p;
        if(sum>=c) return true;
    }
    return false;
}
 
// --- Main Solve Function ---
void solve() {
    ll n,c;
    cin>>n>>c;
    vector<ll> v(n);
    for(auto &it:v) cin>>it;
    ll l=0;
    ll h=1e9;
    ll w=h;
    while(l<=h){
        ll mid=l+(h-l)/2;
        if(check(v,mid,c)){
            w=mid;
            h=mid-1;
        }else{
            l=mid+1;
        }
    }
    cout<<w<<endl;
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