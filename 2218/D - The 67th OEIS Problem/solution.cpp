/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 12.03.2026 20:42:52
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
 
 
bool check(ll m,ll x){
    return m>x;
}
 
// --- Main Solve Function ---
void solve(vector<ll>& prime){
    ll n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<prime[i]*prime[i+1]<<" ";
    }
    cout<<endl;
}
 
// --- Main Function ---
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll MAX = 150000;
    vector<ll> prime;
    vector<bool> isPrime(MAX,true);
    isPrime[0]=false;
    isPrime[1]=false;
    for(int i=2;i*i<MAX;i++){
        if(isPrime[i]){
            for(int j=i*i;j<MAX;j+=i){
                isPrime[j]=false;
            }
        }
    }
    for(int i=2;i<MAX;i++){
        if(isPrime[i]) prime.push_back(i);
    }
    int t = 1;
    cin >> t;
    while (t--) {
        solve(prime);
    }
 
    return 0;
}