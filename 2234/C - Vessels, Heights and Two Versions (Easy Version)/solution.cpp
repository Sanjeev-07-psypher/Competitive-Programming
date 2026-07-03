/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 07.06.2026 20:47:53
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
    ll n;
    cin>>n;
    vector<ll> h(n);
    for(auto &it:h) cin>>it;
 
    vector<ll> w(n,0);
    for(int i=0;i<n;i++){
 
        vector<ll> l(n,0),r(n,0);
 
        for(int j=0;j<n;j++){
            w[j]=h[(i+j)%n];
        }
        
        ll ans=0;
        l[0]=w[0];
        for(int j=1;j<n;j++){
            l[j]=max(w[j],l[j-1]);
        }
        r[n-1]=w[n-1];
        for(int j=n-2;j>=0;j--){
            r[j]=max(r[j+1],w[j]);
        }
        for(int j=1;j<n;j++){
            ans+=min(l[j-1],r[j]);
        }
        cout<<ans<<" ";
    }
    cout<<endl;
 
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