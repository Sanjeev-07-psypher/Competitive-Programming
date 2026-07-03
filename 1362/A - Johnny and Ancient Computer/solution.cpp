/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 06.02.2026 11:06:46
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
    ll a,b;
    cin>>a>>b;
 
    ll setBitCountOfa = __builtin_popcountll(a);
    ll setBitCountOfb = __builtin_popcountll(b);
 
    if(setBitCountOfa!=setBitCountOfb){
        cout<<-1<<endl;
    } else if(a==b) {
        cout<<0<<endl;
    } else {
        ll max_ = max(a,b);
        ll min_ = min(a,b);
        int trailingZerosOfMax = __builtin_ctzll(max_);
        int trailingZerosOfMin = __builtin_ctzll(min_);
        max_ = max_>>(trailingZerosOfMax-trailingZerosOfMin);
        if((max_ ^ min_)==0){
            cout<<ceil((double)(trailingZerosOfMax-trailingZerosOfMin)/3)<<endl;
        } else {
            cout<<-1<<endl;
        }
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
 
 
 