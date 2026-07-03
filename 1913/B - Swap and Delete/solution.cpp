/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 05.02.2026 17:57:50
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
    string s;
    cin>>s;
    ll count0=0,count1=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0') count0++;
        else count1++;
    }
    int length_of_t=0;
    int j=0;
    if(count0==count1){
        cout<<0<<endl;
    } else {
        for(int i=0;i<s.size();i++){
            if(s[i]=='0' && count1) {
                if(s[j]!='1'){
                    length_of_t++;
                    j++;
                    count1--;
                }
            }
            else if(s[i]=='1' && count0){
                if(s[j]!='0'){
                    length_of_t++;
                    j++;
                    count0--;
                }
            }
 
        }
        cout<<s.size()-length_of_t<<endl;
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