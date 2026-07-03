/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 17.03.2026 09:01:58
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
    ll n,k,b,s;
    cin>>n>>k>>b>>s;
    ll lowerBound = k*b;
    ll upperBound = k*b+n*(k-1);
    if(s<lowerBound || s>upperBound){
        cout<<-1<<endl;
        return;
    }
    vector<ll> ans(n,0);
    ans[0]=k*b;
    ll remSum=s-k*b;
    for(int i=0;i<n;i++){
        if((k-1)<=remSum){
            ans[i]+= (k-1);
            remSum-=(k-1);
        }
        else if((k-1)>remSum){
            ans[i]+=remSum;
            remSum=0;
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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