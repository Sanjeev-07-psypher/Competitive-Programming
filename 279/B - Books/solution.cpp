/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 13.06.2026 21:22:51
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
 
bool check(vector<ll>&v, ll t, ll mid){
    ll count=0;
    ll totalMins=0;
    for(int i=0;i<v.size();i++){
        if(totalMins+v[i]<=t){
            count++;
            totalMins+=v[i];
        }
        else return false;
    }
    return true;
}
 
// --- Main Solve Function ---
void solve() {
    ll n,t;
    cin>>n>>t;
    vector<ll> v(n);
    for(auto &it:v) cin>>it;
    ll l=0, r=0, sum=0, maxBooks=0;
    for(r=0;r<n;r++){
        sum+=v[r];
        while(sum>t){
            sum-=v[l];
            l++;
        }
        maxBooks=max(maxBooks,r-l+1);
    }
    cout<<maxBooks<<endl;
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