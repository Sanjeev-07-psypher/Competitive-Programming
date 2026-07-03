/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 13.02.2026 23:40:03
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
void solve()
{
    ll n;
    cin >> n;
    ll x;
    cin>>x;
    vector<ll>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
 
    auto helper = [&](ll h)->bool{
        ll sum=0;
        for(auto it:v){
            sum+=max(0LL,h-it);
        }
        return (sum<=x);
    };
 
    ll si = 1, ei = 1e12, ans = -1;
    while (si <= ei) {
        ll mid = si + (ei - si) / 2;
        if(helper(mid)){
            ans=mid;
            si=mid+1;
        }
        else{
            ei=mid-1;
        }
    }
    cout<<ans<<endl;
 
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