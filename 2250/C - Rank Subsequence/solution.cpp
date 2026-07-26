/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 12.06.2026 20:16:33
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
#define ld long double
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
 
struct str{
    ll l,r,u,v;
};
 
// --- Main Solve Function ---
void solve() {
    ll n;
    cin>>n;
    vector<str> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].l>>v[i].r>>v[i].u>>v[i].v;
    }
 
    for(int m=n;m>=1;m--){
        ll curr=0;
        bool flag=true;
        for(int j=1;j<=m;j++){
            ll rRank=m-j;
            rRank++;
            bool flag2=false;
            while(curr<n){
                if((j<v[curr].l || j>v[curr].r) && (rRank<v[curr].u || rRank>v[curr].v)){
                    flag2=true;
                    curr++;
                    break;
                }
                curr++;
            }
            if(!flag2){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<m<<endl;
            return;
        }
    }
    cout<<0<<endl;
 
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