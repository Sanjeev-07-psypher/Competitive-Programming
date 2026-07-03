/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 15.03.2026 18:58:11
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
    ll x,y;
    cin>>x>>y;
    ll down;
    cin>>down;
    vector<ll> downPoints(down);
    for(int i=0;i<down;i++){
        cin>>downPoints[i];
    }
    ll up;
    cin>>up;
    vector<ll> upPoints(up);
    for(int i=0;i<up;i++){
        cin>>upPoints[i];
    }
    ll left;
    cin>>left;
    vector<ll> leftPoints(left);
    for(int i=0;i<left;i++){
        cin>>leftPoints[i];
    }
    ll right;
    cin>>right;
    vector<ll> rightPoints(right);
    for(int i=0;i<right;i++){
        cin>>rightPoints[i];
    }
 
    ll mx=LLONG_MIN;
 
    //using down;
    ll downL=downPoints[0],downR=downPoints[down-1];
    for(int i=0;i<up;i++){
        ll area = (downR-downL)*y;
        mx=max(mx,area);
    }
    //using up;
    ll upL=upPoints[0],upR=upPoints[up-1];
    for(int i=0;i<down;i++){
        ll area = (upR-upL)*y;
        mx=max(mx,area);
    }
    //using left;
    ll leftL=leftPoints[0],leftR=leftPoints[left-1];
    for(int i=0;i<right;i++){
        ll area = (leftR-leftL)*x;
        mx=max(mx,area);
    }
    //using down;
    ll rightL=rightPoints[0],rightR=rightPoints[right-1];
    for(int i=0;i<left;i++){
        ll area = (rightR-rightL)*x;
        mx=max(mx,area);
    }
    cout<<mx<<endl;
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