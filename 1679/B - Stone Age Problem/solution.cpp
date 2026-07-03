/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 02.06.2026 18:01:28
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
    ll n,q;
    cin>>n>>q;
    vector<ll> v(n);
    for(auto &it:v) cin>>it;
    ll sum = accumulate(v.begin(),v.end(),0LL);
    ll global_val=0;
    ll last_global=0;
    int tm=1;
    vector<ll> last_update(n, 0);
    while(q--){
        ll t;
        cin>>t;
        if(t==1){
            ll i,x;
            cin>>i>>x;
            --i;
 
            ll curr;
            if(last_update[i]<last_global){
                curr = global_val;
            } else {
                curr = v[i];
            }
 
            sum -=curr;
            sum+=x;
            v[i]=x;
            last_update[i]=tm;
            cout<<sum<<endl;
        } else {
            ll x;
            cin>>x;
 
            global_val=x;
            last_global=tm;
            
            sum= x*n;
            cout<<sum<<endl;
        }
        tm++;
    }
}
 
// --- Main Function ---
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}