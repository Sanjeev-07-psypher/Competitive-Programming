/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 05.02.2026 22:57:45
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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int l=0,r=k-1;
    int ans=INT_MAX;
    int countW=0;
    for(int i=l;i<=r && i<n;i++){
        // cout<<"y"<<endl;
        if(s[i]=='W') countW++;
    }
    ans=min(ans,countW);
    while(r<n){
        // cout<<'x'<<endl;
        ans=min(ans,countW);
        if(ans==0) break;
        if(s[l]=='W') countW--;
        l++;
        r++;
        if(s[r]=='W') countW++;
    }
    cout<<ans<<endl;
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