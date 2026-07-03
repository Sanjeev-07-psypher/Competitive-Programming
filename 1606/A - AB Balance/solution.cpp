/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 27.01.2026 18:53:31
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
 
// --- Main Solve Function --
void solve() {
    string s;
    cin>>s;
    int countAB=0,countBA=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='a' && s[i+1]=='b') countAB++;
        else if(s[i]=='b' && s[i+1]=='a') countBA++;
    }
    if(countAB==countBA){
        cout<<s<<endl;
        return;
    } else {
        if(countAB>countBA){
            s[s.size()-1]='a';
        } else{
            s[s.size()-1]='b';
        }
        cout<<s<<endl;
        return;
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