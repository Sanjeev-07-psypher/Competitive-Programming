/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 23.06.2026 13:12:03
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
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto &it:v) cin>>it;
    vector<ll> preEven(n),preOdd(n),diff(n);
    preEven[0]=0;
    preOdd[0]=v[0];
    for(int i=1;i<n;i++){
        if(i%2){ //even
            preEven[i]=v[i]+preEven[i-1];
            preOdd[i]=preOdd[i-1];
        } else {
            preEven[i]=preEven[i-1];
            preOdd[i]=v[i]+preOdd[i-1];
        }
    }
    for(int i=0;i<n;i++){
        diff[i]=preEven[i]-preOdd[i];
    }
    srt(diff);
    for(int i=0;i<n-1;i++){
        if((diff[i]==diff[i+1]) || diff[i]==0 || diff[i+1]==0){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
 
// -- Main Function ---
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