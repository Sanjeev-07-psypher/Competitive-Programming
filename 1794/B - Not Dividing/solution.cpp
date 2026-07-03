/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 22.01.2026 17:52:34
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
 
void helper(vector<int> &arr){
    for(int i=arr.size()-1;i>0;i--){
        if(arr[i]%arr[i-1]==0){
            arr[i]++;
        }
    }
}
 
// --- Main Solve Function -
void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 
    for(int i=0;i<n-1;i++){
        if(arr[i]==1 && arr[i+1]==1){
            arr[i]+=2;
            arr[i+1]+=1;
            continue;
        }
        if(arr[i+1]==1){
            if(arr[i]%2==0){
                arr[i+1]+=2;
            } else arr[i+1]++;
            continue;
        }
        if(arr[i]==1){
            if(arr[i+1]%2==0) {
                arr[i+1]++; 
                arr[i]++;
            }
            else arr[i]++; //2
            continue;
        }
        
        if(arr[i+1]%arr[i]==0){
            arr[i+1]++;
        }
    }
 
    //output
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
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