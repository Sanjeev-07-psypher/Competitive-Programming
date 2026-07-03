/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 24.03.2026 18:59:01
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
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto &it:v) cin>>it;
    int l=0,r=n-1;
    ll x=-1;
    ll y=-1;
    while(l<=r){
        if(v[l]!=v[r]){
            x=v[l];
            y=v[r];
            break;
        }
        l++;
        r--;
    }
    if(x==-1) {
        cout<<"YES"<<endl;
        return;
    }
    vector<ll> ans1,ans2;
    for(int i=0;i<n;i++){
        if(v[i]==x) continue;
        ans1.push_back(v[i]);
    }
    for(int i=0;i<n;i++){
        if(v[i]==y) continue;
        ans2.push_back(v[i]);
    }
    ll m=ans1.size();
    ll s=ans2.size();
    l=0,r=m-1;
    bool flag1=true,flag2=true;
    while(l<r){
        if(ans1[l]!=ans1[r]){
            flag1=false;
            break;
        }
        l++;
        r--;
    }
    l=0,r=s-1;
    while(l<r){
        if(ans2[l]!=ans2[r]){
            flag2=false;
            break;
        }
        l++;
        r--;
    }
    if(flag1||flag2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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