/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 09.03.2026 19:42:15
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
    ll n;
    char c;
    cin>>n>>c;
    string s;
    cin>>s;
    s=s+s;
    n*=2;
    int maxDiff=INT_MIN;
    int lastGreenIndex=-1;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='g') lastGreenIndex=i;
        if(s[i]==c){
            int diff = lastGreenIndex-i;
            maxDiff=max(maxDiff,diff);
        }
    }
    cout<<maxDiff<<endl;
 
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