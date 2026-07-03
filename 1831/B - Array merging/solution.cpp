/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 08.02.2026 15:21:53
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
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(auto &it :a) cin>>it;
    for(auto &it :b) cin>>it;
 
    map<int,int> ap;
    map<int,int> bp;
 
    int len=1;
    for(int i=1;i<=n;i++){
        if(i==n || a[i]!=a[i-1]){
            ap[a[i-1]]=max(ap[a[i-1]],len);
            len=1;
        } else len++;
    }
    len=1;
    for(int i=1;i<=n;i++){
        if(i==n || b[i]!=b[i-1]){
            bp[b[i-1]]=max(bp[b[i-1]],len);
            len=1;
        } else len++;
    }
    auto ia=ap.begin();
    auto ib=bp.begin();
    int ans=0;
    for (map<int,int>::iterator it=ap.begin();it!=ap.end();++it){
        int val=it->first;
        int countA=it->second;
        int countB=bp[val]; 
        if (countA+countB>ans) {
            ans =countA+countB;
        }
    }
    for (map<int,int>::iterator it =bp.begin();it !=bp.end();++it){
        int val =it->first;
        int countB = it->second;
        int countA =ap[val]; 
        if (countA+countB > ans) {
            ans = countA+countB;
        }
    }
    cout<<ans<<endl;
}
 
// --- Main Function --
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