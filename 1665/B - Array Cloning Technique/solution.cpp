/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 21.01.2026 18:48:13
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
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int> mp; //element value, value count
    for(auto x: arr) mp[x]++;
    int maxFreq=0;
    for(auto p: mp){
        maxFreq=max(maxFreq,p.second);
    }
 
    int prevM;
    int ops=0;
    if(maxFreq==n){
        cout<<ops<<endl;
    }else {
        while(true){
            prevM=maxFreq;
            if(maxFreq*2<n){
                maxFreq*=2;
                ops=ops+prevM+1; //duplicating
            } else {
                ops=ops+(n-prevM)+  1; //duplicating remaining
                break;
            }
        }
        cout<<ops<<endl;
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