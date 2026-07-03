/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 15.03.2026 20:46:00
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
 
int ceil_div(int a,int b){
    return (a+b-1)/(b);
}
 
// --- Main Solve Function ---
void solve() {
    int n,r,b;
    cin>>n>>r>>b;
    int k=ceil_div(r,b+1);
    int i=0;
    int countR=0,countB=0;
    while(i<n){
        k=ceil_div(r,b+1);
        for(int j=0;j<k && i<n;j++){
            cout<<'R';
            i++;
            r--;
        }
        if(i==n-1) break;
        if(i<n){
            cout<<'B';
            i++;
            b--;
        }
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