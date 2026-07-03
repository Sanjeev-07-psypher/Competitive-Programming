/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 17.06.2026 18:55:29
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
 
// --- Main Solve Function ---
void solve() {
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto &it :v) cin>>it;
    vector<ll> nxt(n,-1);
 
    for(int i =n-2;i>=0;i--){
        if(v[i]!=v[i+1])
            nxt[i] =i+1;
        else
            nxt[i]=nxt[i+1];
    }
    ll q;
    cin>>q;
    while(q--){
        ll l,r;
        cin>>l>>r;
        l--;
        if(nxt[l]!=-1 && nxt[l]<r){
            cout<<l+1<<" "<<nxt[l]+1<<endl;
        } else{
            cout<<"-1 -1"<<endl;
        }
    }
    cout<<endl;
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