/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 24.12.2025 21:18:28
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
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> b,c;
    b.reserve(n);
    c.reserve(n);
 
    int mx = *max_element(a.begin(),a.end());
    bool flag = true;
    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]){
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<-1<<endl;
    } else {
        
        for(int i=0;i<n;i++){
            if(a[i]==mx){
                c.push_back(a[i]);
            } else {
                b.push_back(a[i]);
            }
        }
 
        cout<<b.size()<<" "<<c.size()<<endl;
        for(int i=0;i<b.size();i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<c.size();i++){
            cout<<c[i]<<" ";
        }
        cout<<endl;
 
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