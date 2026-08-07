/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 07.08.2026 16:28:46
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
 
ll gcd(ll a, ll b){
    a=llabs(a);
    b=llabs(b);
    while(b!=0){
        ll r = a%b;
        a=b;
        b=r;
    }
    return a;
}
 
ll lcm(ll a, ll b){
   if(a==0 || b==0) return 0;
   return (a / gcd(a,b)) * b;
}
 
const int MOD = 1000000007;
 
// --- Main Solve Function ---
void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll> factors[n+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j*j<=i;j++){
            if(i%j==0){
                factors[i].push_back(j);
                if(i/j!=j){
                    factors[i].push_back(i/j);
                }
            }
        }
    }
    int dp[k+1][n+1];
    for(int i=1;i<=n;i++){
        dp[1][i]=1;
    }
    for(int i=2;i<=k;i++){
        for(int j=1;j<=n;j++){
            dp[i][j]=0;
            for(auto &x: factors[j]){
                dp[i][j]=(dp[i][j]+dp[i-1][x])%MOD;
            }
        }
    }
    ll ans=0;
    for(int i=1;i<=n;i++){
        ans=(ans+dp[k][i])%MOD;
    }
    cout<<ans<<endl;
}
 
// --- Main Function ---
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}