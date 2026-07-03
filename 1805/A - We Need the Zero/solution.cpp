/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 01.02.2026 16:15:06
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
 
bool zero(vector<int>& v){
    int ans=v[0];
    for(int i=1;i<v.size();i++){
        ans = (ans^v[i]);
    }
    if(ans==0) return true;
    return false; 
}
 
// --- Main Solve Function ---
void solve() {
    int n;
    cin>>n;
    vector<int> v(n),b(n);
    for(auto &it: v) cin>>it;
 
    for(int i=0;i<=1000;i++){
        for(int j=0;j<n;j++){
            b[j]=v[j]^i;
        }
        if(zero(b)){
            cout<<i<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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