/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 08.06.2026 22:20:55
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
 
bool check(vector<ld>&x,vector<ld>&t,ld mid){
    ld left=-1e18, right=1e18;
    for(int i=0;i<x.size();i++){
        if(t[i]>mid) return false;  
 
        left=max(left,x[i]- (mid-t[i]));
        right=min(right,x[i]+(mid-t[i]));
    }
    return left<=right;
}
 
// --- Main Solve Function ---
void solve() {
    ll n;
    cin>>n;
    vector<ld> x(n),t(n);
    for(auto &it: x) cin>>it;
    for(auto &it: t) cin>>it;
    ld l=0;
    ld h=2e14;
    while(h-l>1e-6){
        ld mid=l+ (h-l)/2;
        if(check(x,t,mid)){
            h=mid;
        } else {
            l=mid;
        }
    }
 
    ld left=1e-18, right=1e18;
    ld T=h;
    for(int i=0;i<x.size();i++){
 
        left=max(left,x[i]- (T-t[i]));
        right=min(right,x[i]+(T-t[i]));
    }
    cout<<fixed<<setprecision(7)<<(left+right)/2<<endl;
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