/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 06.06.2026 21:45:46
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
    string s;
    cin>>s;
    ll n=s.size();
 
    int mx=0;
    int i=0;
    while(i<n){
        if(s[i]=='0'){
            i++;
            continue;
        }
        int j=i+1;
        while(j<n && s[j]=='1'){
            j++;
        }
        mx=max(mx,j-i);
        i=j;
    }
 
    if(mx==n){
        cout<<1LL*mx*mx<<endl;
        return;
    }
 
    if(s[0]=='1' && s[n-1]=='1'){
        int i=0;
        int count=0;
        while(i<n && s[i]=='1'){
            i++;
            count++;
        }
        int j=n-1;
        while(j>i && s[j]=='1'){
            j--;
            count++;
        }
        mx=max(mx,count);
    }
 
    mx++;
    ll ans=(mx+1)/2;
    cout<<(ans)*(mx/2)<<endl;
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