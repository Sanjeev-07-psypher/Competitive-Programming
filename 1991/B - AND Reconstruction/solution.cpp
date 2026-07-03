/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 23.03.2026 12:50:32
**/
 
#include <bits/stdc++.h>
 
// --- For Debugging ---
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
// -----------------
 
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
    ll n;
    cin>>n;
    n=n-1;
    vector<ll> v(n);
    for(auto &it:v) cin>>it;
    vector<ll> ans;
    ans.push_back(v[0]);
    for(int i=1;i<n;i++){
        ans.push_back(v[i]|v[i-1]);
    }
    ans.push_back(v[n-1]);
    int ansSize=ans.size();
    for(int i=0;i<ansSize-1;i++){
        ll x =ans[i]&ans[i+1];
        // cout<<x<<" "<<v[i]<<endl;
        if((ans[i]&ans[i+1])!=v[i]){
            cout<<-1<<endl;
            return;
        }
    }
    for(int x:ans){
        cout<<x<<" ";
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