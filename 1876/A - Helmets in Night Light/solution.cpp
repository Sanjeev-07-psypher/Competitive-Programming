/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 28.02.2026 20:45:36
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
    ll n,p;
    cin>>n>>p;
    vector<ll> a(n),b(n);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
 
    vector<vector<ll>> arr(n,vector<ll>(2));
    for(int i=0;i<n;i++){
        arr[i][0]=a[i];
        arr[i][1]=b[i];
    }
 
    ll cost=p;
    ll num=1;
 
    sort(arr.begin(),arr.end(),[](const vector<ll>&x,vector<ll>&y){
        return x[1]<y[1];
    });
 
    for(int i=0;i<n;i++){
        if(num>=n) break;
        if(p<=arr[i][1]){
            cost+=(p*(n-num));
            break;
        } else {
            if(arr[i][0]<=(n-num)){
                num+=arr[i][0];
                cost+=(arr[i][1]*arr[i][0]);
            } else {
                cost+=(arr[i][1]*abs(n-num));
                num+=arr[i][0];
            }
        }
    }
    
 
    cout<<cost<<endl;
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