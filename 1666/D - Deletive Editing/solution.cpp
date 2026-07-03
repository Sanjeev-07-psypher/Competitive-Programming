/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 24.01.2026 15:47:30
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
 
bool s1existsins2(char c,string s2){
    for(int i=0;i<s2.size();i++){
        if(c==s2[i]) return true;
    }
    return false;
}
 
// --- Main Solve Function ---
void solve() {
    string s1,s2;
    cin>>s1>>s2;
    vector<int> hash(26,0);
    for(int i=0;i<s2.size();i++){
        hash[s2[i]-'A']++;
    }
 
    int i=s1.size()-1;
    int j=s2.size()-1;
    while(true){
        if(j==-1){
            cout<<"YES"<<endl;
            return;
        }
        if(i==-1) break;
        if(s1[i]==s2[j]){
            if(hash[s1[i]-'A']==0) break;
            else{
                hash[s2[j]-'A']--;
                i--;
                j--;
            }
        }
        else if(s1existsins2(s1[i],s2)){
            if(hash[s1[i]-'A']!=0) {
                hash[s1[i]-'A']--;
            }
            i--;
        }
        else{
            i--;
        }
    }
    cout<<"NO"<<endl;
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