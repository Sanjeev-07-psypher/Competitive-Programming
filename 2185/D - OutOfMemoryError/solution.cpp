/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 18.04.2026 10:47:53
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
    ll n,m,h;
    cin>>n>>m>>h;
    vector<ll> a(n);
    for(auto &it:a) cin>>it;
    vector<ll> aux=a;
    vector<int> mIdx;
    vector<bool> im(n, false);
    for (int i = 0; i < m; i++) {
        int b;
        ll c;
        cin>>b>>c;
        int idx=b-1;
        a[idx]+=c;
        if (!im[idx]){
            im[idx] =true;
            mIdx.push_back(idx);
        }
        if (a[idx]>h){
            for (int x: mIdx) {
                a[x]=aux[x];
                im[x]=false;
            }
            mIdx.clear();
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
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