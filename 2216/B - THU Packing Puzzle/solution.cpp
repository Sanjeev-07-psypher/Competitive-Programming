/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 19.04.2026 08:47:36
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
    ll t,h,u;
    cin>>t>>h>>u;
    ll ans=0;
 
    //t=0
    if(t==0){
        ans=(h+u)*3;
        cout<<ans<<endl;
        return;
    }
    //tu combination
    if(t>0 && u>0){
        ll mn=min(t,u);
        ans+=mn*4;
        t-=mn;
        u-=mn;
    }
    //tht combination
    if(t>0 && h>0){
                ll reqH=t/2;
                if(reqH<=h){
                    ans+=(reqH*7);
                    h-=reqH;
                    t-=(reqH*2);
                } else {
                    ans+=(h*7);
                    t-=(h*2);
                    h=0;
                }
        
    }
    //tt combination
    if(h>0 && t==1){
        ans+=5;
        h--;
        t--;
    }
    if(t>0){
        ans+=(2*t)+1;
        t=0;
    }
    //t exhasusts
    if((u>0 || h>0) && t<=0){
        ans+= (u+h)*3;
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