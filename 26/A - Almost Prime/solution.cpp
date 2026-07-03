/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 12.03.2026 19:01:27
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
 
void sieve(vector<int> &prime,int n){
    vector<bool> is_prime(n+1,true);
    is_prime[0]=is_prime[1]=false;
    
    for(int p= 2;p*p<=n;p++) {
        if (is_prime[p]) {
            for (int i =p*p;i<=n;i+=p)
                is_prime[i]=false;
        }
    }
    
    for(int p=2;p<=n;p++) {
        if(is_prime[p]) {
            prime.push_back(p);
        }
    }
}
 
// --- Main Solve Function ---
void solve() {
    int n;
    cin>>n;
    vector<int> prime;
    sieve(prime,n);
    int count=0;
    int ans=0;
    for(int i=1;i<=n;i++){
        count=0;
        for(int j=0;j<prime.size();j++){
            if(i%prime[j]==0) count++;
            if(prime[j]>i) break;
        }
        if(count==2) ans++;
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