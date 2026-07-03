/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 05.04.2026 22:00:35
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
    ll n,k;
    cin>>n>>k;
    if(k==1){
        cout<<"YES"<<endl;
        cout<<n<<endl;
        return;
    }
    if(n<k || n-k==1){
        cout<<"NO"<<endl;
        return;
    }
    if(n%2!=0 && k%2==0){
        cout<<"NO"<<endl;
        return;
    }
    if(n==k){
        cout<<"YES"<<endl;
        for(int i=0;i<k;i++){
            cout<<1<<" ";
        }
        cout<<endl;
        return;
    }
    if(n/2>=k && n%2==0){
        cout<<"YES"<<endl;
        for(int i=0;i<k-1;i++){
            cout<<2<<" ";
            n-=2;
        }
        cout<<n<<endl;
        return;
    }
    if(n/2<k && n%2==0 && k%2==0){
        cout<<"YES"<<endl;
        for(int i=0;i<k-1;i++){
            cout<<1<<" ";
            n--;
        }
        cout<<n<<endl;
        return;
    }
    if(n/2<k && n%2==0 && k%2!=0){
        cout<<"NO"<<endl;
        return;
    }
    if(n%2!=0 && k%2!=0){
        cout<<"YES"<<endl;
        for(int i=0;i<k-1;i++){
            cout<<1<<" ";
            n--;
        }
        cout<<n<<endl;
        return;
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