/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 12.03.2026 20:21:00
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
// void solve() {
//     ll n;
//     cin>>n;
//     vector<ll> v(n),copy(n);
//     bool zero=false;
//     for(int i=0;i<n;i++) {
//         cin>>v[i];
//     }
//     for(int i=0;i<n;i++){
//         copy[i]=v[i];
//         if(v[i]==0) zero=true;
//     }
//     ll sum=0;
//     if(zero){
//         for(int i=0;i<n;i++){
//             sum+=abs(v[i]);
//         }
//         cout<<sum<<endl;
//         return;
//     }
//     for(int i=1;i<n;i++){
//         if(copy[i]<0 && copy[i-1]<0){
//             copy[i-1]=copy[i-1]*-1;
//             copy[i]=copy[i]*-1;
//         } else if(copy[i]<0 || copy[i-1]<0){
//             if(abs(copy[i])==abs(copy[i-1])) continue;
//             else{
//                 if(copy[i-1]<copy[i]){
//                     if(abs(copy[i-1])> abs(copy[i])){
//                         copy[i-1]=copy[i-1]*-1;
//                         copy[i]=copy[i]*-1;
//                     } 
//                 } else {
//                     if(abs(copy[i-1])<abs(copy[i])){
//                         copy[i-1]=copy[i-1]*-1;
//                         copy[i]=copy[i]*-1;
//                     }
//                 }
//             }
//         }
//     }
//     ll sum1=accumulate(copy.begin(),copy.end(),0LL);
//     for(int i=0;i<n;i++){
//         copy[i]=v[i];
//     }
//     for(int i=n-1;i>0;i--){
//         if(copy[i]<0 && copy[i-1]<0){
//             copy[i-1]=copy[i-1]*-1;
//             copy[i]=copy[i]*-1;
//         } else if(copy[i]<0 || copy[i-1]<0){
//             if(abs(copy[i])==abs(copy[i-1])) continue;
//             else{
//                 if(copy[i-1]<copy[i]){
//                     if(abs(copy[i-1])> abs(copy[i])){
//                         copy[i-1]=copy[i-1]*-1;
//                         copy[i]=copy[i]*-1;
//                     } 
//                 } else {
 
//                 }
//             }
//         }
//     }
//     ll sum2=accumulate(copy.begin(),copy.end(),0LL);
//     // cout<<sum1<<" "<<sum2<<endl;
//     cout<<max(sum1,sum2)<<endl;
// }
 
void solve(){
    ll n;
    cin>>n;
    vector<int> v(n);
    for(auto &it: v) cin>>it;
    ll count0=0;
    for(int i=0;i<n;i++){
        if(v[i]<0)count0++;
    }
    if(count0%2==0){
        ll sum=0;
        for(int i=0;i<n;i++){
            sum+=abs(v[i]);
        }
        cout<<sum<<endl;
        return;
    }
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=abs(v[i]);
        v[i]=abs(v[i]);
    }
    ll mn=*min_element(v.begin(),v.end());
    cout<<sum-2*mn<<endl;
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