/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 22.01.2026 12:09:06
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
 
 
 
int solve2(string s){
    int n = s.size();
    int ans = INT_MAX;
 
    vector<string> target={"00","25","50","75"};
    for(auto &t: target){
        int pos2=-1;
        for(int i=n-1;i>=0;i--){
            if(s[i]==t[1]){
                pos2=i;
                break;
            }
        }
        if(pos2==-1) continue;
 
            for(int i=pos2-1;i>=0;i--){
                if(s[i]==t[0]){
                    int remove = pos2-i-1 + (n-1)-pos2;
                    ans = min(ans,remove);
                    break;
                }
            }
    }
    return ans;
}
 
// --- Main Solve Function ---
void solve() {
    string s;
    cin>>s;
    cout<<solve2(s)<<endl;
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