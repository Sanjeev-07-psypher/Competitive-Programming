/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 11.03.2026 08:27:15
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
            int num;
            cin>>num;
            vector<int> arr;
            int count=0;
            int x=10;
            int i=0;
            while(num!=0){
                int ld=num%x;
                if(ld==0) {
                    x=x*10;
                }
                else {
                    count++;
                    arr.push_back(ld);
                    num=num-ld;
                    x=x*10;
                }
            }
            cout<<count<<endl;
            for(int j=0;j<count;j++){
                cout<<arr[j]<<" ";
            }
            cout<<endl;
}
 
// --- Main Function -
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