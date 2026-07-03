/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 11.06.2026 19:20:09
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
 
bool check(vector<ll>&v,ll mid,ll s){
    vector<ll> aux=v;
    for(int i=0;i<v.size();i++)
        aux[i] = v[i] + 1LL*(i+1)*mid;
    sort(aux.begin(), aux.end());
    ll cost=0;
 
    for(int i=0;i<mid;i++){
        cost+=aux[i];
        if(cost>s) return false;
    }
    return true;
}
 
// --- Main Solve Function --
void solve() {
    ll n,s;
    cin>>n>>s;
    vector<ll> v(n);
    for(auto &it:v) cin>>it;
    ll l=0;
    ll h=n;
    ll ans=l;
    while(l<=h){
        ll mid=l+(h-l)/2;
        if(check(v,mid,s)){
            ans=mid;
            l=mid+1;
        } else {
            h=mid-1;
        }
    }
    ll cost=0;
    vector<ll> aux=v;
    for(int i=0;i<v.size();i++)
        aux[i] = v[i] + 1LL*(i+1)*ans;
    sort(aux.begin(), aux.end());
    for(int i=0;i<ans;i++){
        cost+=aux[i];
    }
    cout<<ans<<" "<<cost<<endl;
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