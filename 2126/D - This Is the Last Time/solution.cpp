/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 29.04.2026 07:58:59
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
    ll n,k;
    cin>>n>>k;
    vector<vector<ll>> v(n,vector<ll>(3));
    for(int i=0;i<n;i++){
        ll l,r,real;
        cin>>l>>r>>real;
        v[i][0]=l;
        v[i][1]=r;
        v[i][2]=real;
    }
    sort(v.begin(),v.end(),[] (const vector<ll> & a,const vector<ll> &b){
        return a[0]<b[0];
    });
 
    for(int i=0;i<n;i++){
        if(k>= v[i][0] && k<=v[i][1]){
            if(k<=v[i][2]) k=v[i][2];
        }
    }
    cout<<k<<endl;
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