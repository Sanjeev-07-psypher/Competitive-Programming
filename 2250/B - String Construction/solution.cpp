/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 12.06.2026 20:16:33
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
#define ld long double
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
    if(n-k==1){
        cout<<-1<<endl;
        return;
    }
    ll c=(n+1)/2;
    ll f=n/2;
 
    ll b=n-k;
    ll one=(b+1)/2;
    ll zero=b/2;
    string ans="";
    for(int i=1;i<=b;i++){
        if(i==1){
            ans.append(c-one+1,'1');
 
        } else if(i==2){
            ans.append(f-zero+1,'0');
        } else if(i&1){
            ans.append(1,'1');
        } else {
            ans.append(1,'0');
        }
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