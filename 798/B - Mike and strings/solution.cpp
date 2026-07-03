/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 17.06.2026 21:31:30
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
void solve(){
    ll n;
    cin>>n;
    vector<string> v(n);
    for(auto &s:v) cin>>s;
    ll ans=LLONG_MAX;
    for(ll i=0;i<n;i++){
        ll cur=0;
        for(ll j=0;j<n;j++){
            string t=v[j];
            ll mn=LLONG_MAX;
            for(ll k=0;k<t.size();k++){
                if(t==v[i]) mn=min(mn,k);
                rotate(t.begin(),t.begin()+1,t.end());
            }
            if(mn==LLONG_MAX){
                cout<<-1<<endl;
                return;
            }
            cur+=mn;
        }
        ans=min(ans,cur);
    }
    cout<<ans<<endl;
}
//--- Main Function ---
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