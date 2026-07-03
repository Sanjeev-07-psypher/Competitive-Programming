    /**
     *    author:  Sanjeev Kumar Gupta
     *    created: 28.03.2026 21:46:20
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
        if(x%2!=0 && y%2!=0){
            cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
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