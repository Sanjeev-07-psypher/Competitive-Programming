/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 24.01.2026 19:23:06
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
    ll n;
    cin>>n;
    if(n%2==0 && n>=4){
        ll min=0,max=0;
        if(n%4==0 && n%6==0){
            min = n/6;
            max= n/4;
        } else if(n%4==0){
            max = n/4;
            min = (n/6)+1;
        } else if(n%4!=0 && n%6!=0){
            min = (n/6)+1;
            max = n/4;
        }else {
            min = n/6;
            max = n/4;
        }
        cout<<min<<" "<<max<<endl;
    } else {
        cout<<-1<<endl; 
    }
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