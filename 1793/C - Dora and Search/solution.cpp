/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 01.06.2026 21:12:08
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
    vector<ll> v(n);
    for(auto &it:v)cin>>it;
    ll min=1;
    ll max=n;
    int l=0,r=n-1;
    while(max!=min){
        if(v[l]==min){
            l++;
            min++;
        } else if(v[l]==max){
            l++;
            max--;
        } else if(v[r]==min){
            r--;
            min++;
        } else if(v[r]==max){
            r--;
            max--;
        } else break;
    }
    if(max==min){
        cout<<-1<<endl;
    } else{
        cout<<l+1<<" "<<r+1<<endl;
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