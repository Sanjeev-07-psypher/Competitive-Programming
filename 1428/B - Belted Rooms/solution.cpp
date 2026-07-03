/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 06.06.2026 20:23:47
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
    string s;
    cin>>s;
 
    ll ans=0,ac=0,cc=0;
    for(int i=0;i<n;i++){
        if(s[i]=='<'){
            ac++;
        } else if(s[i]=='>'){
            cc++;
        }
    }
    
   if(ac==0 || cc==0){
    cout<<n<<endl;
    return;
   }
 
    for(int i=0;i<n;i++){
        if(s[i]=='-' || s[(n+i-1)%n]=='-')ans++;
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