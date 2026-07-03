/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 23.03.2026 21:28:13
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
    vector<ll> v(n);
    vector<ll> dummy(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        dummy[i]=v[i];
    }
    //fliping any element from 1st half to 1;
    for(int i=0;i<n/2;i++){
        if(dummy[i]==0){
            dummy[i]=1;
            break;
        }
    }
    ll ans1=0;
    // for(int i=0;i<n;i++){
    //     if(dummy[i]==1){
    //         for(int j=i+1;j<n;j++){
    //             if(dummy[j]==0) ans1++;
    //         }
    //     }
    // }
    ll count0_1stcase=0;
    for(int i=0;i<n;i++){
        if(dummy[i]==0) count0_1stcase++;
    }
    for(int i=0;i<n;i++){
        if(dummy[i]==0) count0_1stcase--;
        if(dummy[i]==1) ans1+=count0_1stcase;
    }
    for(int i=0;i<n;i++){
        dummy[i]=v[i];
    }
    //fliping any element from 2nd half to 0;
    for(int i=n-1;i>=n/2;i--){
        if(dummy[i]==1){
            dummy[i]=0;
            break;
        }
    }
    ll ans2=0;
    // for(int i=0;i<n;i++){
    //     if(dummy[i]==1){
    //         for(int j=i+1;j<n;j++){
    //             if(dummy[j]==0) ans2++;
    //         }
    //     }
    // }
    ll count0_2ndcase=0;
    for(int i=0;i<n;i++){
        if(dummy[i]==0) count0_2ndcase++;
    }
    for(int i=0;i<n;i++){
        if(dummy[i]==0) count0_2ndcase--;
        if(dummy[i]==1) ans2+=count0_2ndcase;
    }
    cout<<max(ans1,ans2)<<endl;
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