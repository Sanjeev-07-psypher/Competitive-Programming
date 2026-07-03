/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 20.06.2026 19:26:47
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
    ll n,s;
    cin>>n>>s;
    vector<ll> v(n);
    for(auto &it:v) cin>>it;
    int l=0,r=0;
    ll sum=accumulate(all(v),0LL);
    ll ans=1e9;
    ll currSum=v[l];
    if(sum<s){
        cout<<-1<<endl;
        return;
    }
    while(r<n){
        if(currSum==s){
            ll left=l;
            ll right=n-r-1;
            ans=min(ans,left+right);
            r++;
            currSum+=v[r];
        }
        else if(currSum<s){
            r++;
            currSum+=v[r];
        }
        else if(currSum>s){
            while(currSum!=s){
                currSum-=v[l];
                l++;
            }
        }
    }
    cout<<ans<<endl;
}
 
//--- Main Function ---
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