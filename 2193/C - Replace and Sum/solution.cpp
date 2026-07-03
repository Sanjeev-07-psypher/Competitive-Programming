/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 14.03.2026 16:54:25
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
    ll n,q;
    cin>>n>>q;
    vector<ll> a(n);
    vector<ll> b(n);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
 
    for(int i=0;i<n;i++){
        if(b[i]>a[i]) a[i]=b[i];
    }
    for(int i=n-1;i>0;i--){
        if(a[i]>a[i-1]) a[i-1]=a[i];
    }
    vector<ll> pre(n);
    pre[0]=a[0];
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+a[i];
    }
 
    while(q--){
        ll l,r;
        cin>>l>>r;
        l--;
        r--;
        if(l==0) cout<<pre[r]<<" ";
        else cout<<pre[r]-pre[l-1]<<" ";
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