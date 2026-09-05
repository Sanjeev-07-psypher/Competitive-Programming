/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 05.09.2026 20:16:06
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
 
ll lcm(ll a, ll b){
   if(a==0 || b==0) return 0;
   return (a / gcd(a,b)) * b;
}
 
// --- Main Solve Function ---
void solve() {
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto &it:v) cin>>it;
    if(is_sorted(v.begin(),v.end())){
        cout<<-1<<endl;
        return;
    }
    vector<pair<ll,ll>> org;
    for(int i=0;i<n;i++){
        org.push_back({v[i],i});
    }
    vector<pair<ll,ll>> s;
    for(int i=0;i<n;i++){
        s.push_back({v[i],i});
    }
    sort(s.begin(),s.end());
    ll mx=*max_element(v.begin(),v.end());
    ll mn=*min_element(v.begin(),v.end());
    ll k=-1;
    vector<ll> mx_;
    for(int i=0;i<n;i++){
        if(org[i].second!=s[i].second){
            mx_.push_back(max(mx-org[i].first,org[i].first-mn));
        }
    }
    k=*min_element(mx_.begin(),mx_.end());
    cout<<k<<endl;
 
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