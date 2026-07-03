/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 02.02.2026 21:42:02
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
    int a,b;
    cin>>a>>b;
    if(b>a){
        cout<<1<<endl;
        return;
    }
    int x=a;
    int y=b;
    int ops=INT_MAX;
    for(int i=0;i<31;i++){
        if(i==0 && y==1) continue;
        int localOps=0;
        y+=i;
        localOps+=i;
        while(x>0){
            x/=y;
            localOps++;
        }
        ops=min(ops,localOps);
        x=a;
        y=b;
    }
    cout<<ops<<endl;
}
//sumit is gay
// --- Main Function --
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