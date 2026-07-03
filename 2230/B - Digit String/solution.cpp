/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 01.05.2026 08:38:18
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
    string s;
    cin>>s;
    ll n=s.size();
    string ans;
    for(int i=0;i<n;i++){
        if(s[i]!='4') ans.push_back(s[i]);
    }
    int n2=ans.size();
    vector<int> prefix(n2+1,0),suffix(n2+1,0);
 
    for(int i=0;i<n2;i++){
        prefix[i+1]=prefix[i];
        if(ans[i]=='1'||ans[i]=='3') prefix[i+1]++;
    }
 
    for(int i=n2-1;i>=0;i--){
        suffix[i]=suffix[i+1];
        if(ans[i]=='2') suffix[i]++;
    }
 
    int x=INT_MAX;
 
    for(int i=0;i<=n2;i++){
        x=min(x,prefix[i]+suffix[i]);
    }
 
    cout<<x+n-n2<<endl;
 
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