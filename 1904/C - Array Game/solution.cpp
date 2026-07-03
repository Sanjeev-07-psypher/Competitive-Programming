/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 26.06.2026 22:44:01
**/
 
#include <bits/stdc++.h>
 
// --- For Debugging ---
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
//-------------------
 
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
 
ll calc(vector<pair<ll,ll>> &p){
    ll mn=LONG_LONG_MAX;
    for(int i=0;i<p.size()-1;i++){
        if(mn>abs(p[i+1].first-p[i].first)){
            mn=abs(p[i+1].first-p[i].first);
        }
    }
    return mn;
}
 
// --- Main Solve Function ---
ll calc(vector<ll> &v){
    ll mn = LLONG_MAX;
    for(int i=0;i+1<v.size();i++){
        mn=min(mn,v[i+1]-v[i]);
    }
    return mn;
}
 
void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(auto &it:v) cin>>it;
    sort(v.begin(),v.end());
    if(k>=3){
        cout<<0<<endl;
        return;
    }
    ll ans=v[0];
 
    // k=1
    ans=min(ans,calc(v));
    if(k==1){
        cout<<ans<<endl;
        return;
    }
    // k =2
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            ll d=v[j]-v[i];
            ans=min(ans,d);
            auto it=lower_bound(v.begin(),v.end(),d);
            if(it!=v.end())
                ans=min(ans,abs(*it-d));
            if(it!=v.begin()){
                --it;
                ans=min(ans,abs(*it-d));
            }
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