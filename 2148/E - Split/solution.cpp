/**
 * author:  Sanjeev Kumar Gupta
 * created: 16.06.2026 21:27:58
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
    ll n,k;
    cin>>n>>k;
    vi a(n);
    vector<ll> tot(n+1,0);
    for(ll i=0;i<n;i++){
        cin>>a[i];
        tot[a[i]]++;
    }
    bool ok=true;
    vector<ll> limit(n+1,0);
    for(ll i=1;i<=n;i++){
        if(tot[i]%k!=0){
            ok=false;
            break;
        }
        limit[i]=tot[i]/k;
    }
    if(!ok){
        cout<<0<<endl;
        return;
    }
    vector<ll> curr(n+1,0);
    ll ans=0,l=0;
    for(ll r=0;r<n;r++){
        curr[a[r]]++;
        while(curr[a[r]]>limit[a[r]]){
            curr[a[l]]--;
            l++;
        }
        ans+=(r-l+1);
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