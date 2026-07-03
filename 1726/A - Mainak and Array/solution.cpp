/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 24.01.2026 15:04:51
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
 
int maxN(int a,int b,int c,int d, int e){
    if(a>=b && a>=c && a>=d && a>=e) return a;
    else if(b>=a && b>=c && b>=d && b>=e) return b;
    else if(c>=a && c>=b && c>=d && c>=e) return c;
    else if(d>=a && d>=b && d>=c && d>=e) return d;
    else return e;
}
 
// --- Main Solve Function ---
void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = arr[n-1]-arr[0];
 
    for(int i=0;i<n-1;i++)
        ans= max(ans,arr[n-1]-arr[i]);
 
    for(int i=0;i<n;i++)
        ans= max(ans,arr[i]-arr[0]);
 
    for(int i=0;i<n-1;i++)
        ans= max(ans,arr[i]-arr[i+1]);
    
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