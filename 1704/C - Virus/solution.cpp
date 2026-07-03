/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 02.06.2026 16:49:17
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
    ll n,m;
    cin>>n>>m;
    vector<ll> infected(m);
    for(auto &it: infected) cin>>it;
    sort(infected.begin(),infected.end());
    vector<ll> seg;
    for(int i=1;i<=m;i++){
        if(i==m){
            seg.push_back(n-infected[m-1]+infected[0]-1);
        } else {
            seg.push_back(infected[i]-infected[i-1]-1);
        }
    }
 
    sort(seg.begin(),seg.end());
    ll zseg=0;
    for(int i=0;i<seg.size();i++){
        if(seg[i]==0) zseg++;
    }
 
    // cout<<zseg<<endl;
    // for(int i=0;i<seg.size();i++){
    //     cout<<seg[i]<<" ";
    // }
 
    for(int i=seg.size()-1;i>=0;i--){
        if(seg[i]<=0) break;
        else {
            for(int j=0;j<i;j++){
                seg[j]-=4;
            }
            if(seg[i]!=1){
                seg[i]--;
            }
        }
    }
 
    ll sum=0;
    for(int i=0;i<seg.size();i++){
        if(seg[i]>0) sum+=seg[i];
    }
 
    cout<<n-sum<<endl;
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