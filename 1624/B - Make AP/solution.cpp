/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 22.01.2026 16:59:04
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
 
bool isInteger(double n){
    return fmod(n,1.0) == 0.0;
}
 
// --- Main Solve Function ---
void solve() {
    ll a,b,c;
    cin>>a>>b>>c;
    bool flag = false;
 
    //new a
    ll new_a = (2*b)-c;
    if(new_a/a>0 && new_a%a==0) flag=true;
 
    //new b
    ll new_b = (a+c)/2;
    if(new_b/b>0 && new_b%b==0 && (c-a)%2==0) flag = true;
 
    //new_c 
    ll new_c =(2*b) -a;
    if(new_c/c>0 && new_c%c==0 ) flag = true;
 
    if(flag) cout<<"YES"<<endl;
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