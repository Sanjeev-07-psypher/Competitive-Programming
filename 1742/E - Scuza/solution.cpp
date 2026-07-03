/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 08.06.2026 13:08:38
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
#define lld long double
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
 
bool check(vector<ll> &v,ll mid,ll target){
    return v[mid]<=target;
}
 
// --- Main Solve Function ---
void solve() {
    ll n,q;
    cin>>n>>q;
    vector<ll> height(n),queries(q);
    for(auto &it: height){
        cin>>it;
    }
    for(auto &it: queries){
        cin>>it;
    }
 
    vector<ll> pmax(n),prefix(n);
    pmax[0]=prefix[0]=height[0];
 
    for(int i=1;i<n;i++){
        pmax[i]=max(pmax[i-1],height[i]);
        prefix[i]=prefix[i-1]+height[i];
    }
 
    for(int i=0;i<q;i++){
        ll target=queries[i];
        ll l=0;
        ll h=n-1;
        ll res=-1;
        while(l<=h){
            ll mid=l+(h-l)/2;
            if(check(pmax,mid,target)){
                res=mid;
                l=mid+1;
            } else {
                h=mid-1;
            }
        }
        if(res==-1){
            cout<<0<<" ";
        } else {
            cout<<prefix[res]<<" ";
        }
    }
    cout<<endl;
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