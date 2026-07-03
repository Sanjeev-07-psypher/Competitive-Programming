/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 07.06.2026 10:56:51
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
 
bool isPalindrome(string s){
    int l=0,r=s.size()-1;
    while(l<=r){
        if(s[l]!=s[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}
 
void reverse(string &s){
    int l=0,r=s.size()-1;
    while(l<r){
        swap(s[l],s[r]);
        l++;
        r--;
    }
}
 
bool all1(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]=='0') return false;
    }
    return true;
}
 
 
// --- Main Solve Function ---
void solve() {
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll zc=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0') zc++;
    }
 
    if(zc==1){
        cout<<"BOB"<<endl;
    } else if(zc%2==0) {
        cout<<"BOB"<<endl;
    } else {
        cout<<"ALICE"<<endl;
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