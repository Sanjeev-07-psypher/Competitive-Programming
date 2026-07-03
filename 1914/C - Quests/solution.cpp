/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 01.04.2026 19:44:15
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
    vector<ll> a(n),b(n);
    for(auto &it: a) cin>>it;
    for(auto &it: b) cin>>it;
    ll maxXp=0;
    ll currSum=0;
    ll maxB=0;
    int lim=min(n,k);
    for(int i=0;i<lim;i++){
        currSum+=a[i];
        maxB=max(maxB,b[i]);
        ll currXp=currSum+(ll)(k-i-1)*maxB;
        maxXp=max(maxXp,currXp);
    }
    cout<<maxXp<<endl;
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