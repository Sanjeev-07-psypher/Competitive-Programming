/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 28.06.2026 20:23:25
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
 
ll gcd(ll a, ll b){
    a=llabs(a);
    b=llabs(b);
    while(b!=0){
        ll r = a%b;
        a=b;
        b=r;
    }
    return a;
}
 
// --- Main Solve Function ---
void solve() {
    ll n,c;
    cin>>n>>c;
    vector<ll> a(n),b(n);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it; 
 
    ll minCost1=0,minCost2=0;
    bool s=false;
    for(int i=0;i<n;i++){
        if(a[i]>=b[i]){
            minCost1+=a[i]-b[i];
        } else {
            s=true;
        }
    }
 
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    minCost2+=c;
    for(int i=0;i<n;i++){
        if(a[i]>=b[i]){
            minCost2+= (a[i]-b[i]);
        } else {
            cout<<-1<<endl;
            return;
        }
    }
    if(s){
        cout<<minCost2<<endl;
    } else {
        cout<<minCost1<<endl;
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