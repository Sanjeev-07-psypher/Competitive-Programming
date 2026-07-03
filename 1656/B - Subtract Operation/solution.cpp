/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 01.04.2026 11:31:57
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
    for(auto &it :v) cin>>it;
    srt(v);
    if(n==1){
        if(k==v[0]){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
        return;
    }
    ll l=0,r=1;
    while(l<n && r<n) {
        if(v[l]+abs(k)==v[r]){
            cout<<"YES"<<endl;
            return;
        } 
        if(v[l]+abs(k)>v[r]) r++;
        else l++;
    }
    cout<<"NO"<<endl;
    
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