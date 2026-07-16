/**
 * author:  Sanjeev Kumar Gupta
 * created: 14.07.2026 20:29:38
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
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    for(auto &it:a) cin>>it;
    vector<ll> c;
    ll curr=1;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
            curr++;
        }else{
            c.pb(curr);
            curr=1;
        }
    }
    c.pb(curr);
    srt(c);
    ll m=c.size();
    ll sum_S=0;
    for(ll x:c) sum_S+=x;
    ll cnt_S=m;
    ll prev_c=0;
    ll ans=0;
    for(int j=0;j<m;j++){
        if(prev_c<c[j]){
            if(cnt_S>0){
                ll rem=k-sum_S;
                if(rem%cnt_S==0){
                    ll delta=rem/cnt_S;
                    if(delta+c[j]-1>=0) ans++;
                }
            }
        }
        prev_c=c[j];
        sum_S-=c[j];
        cnt_S--;
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