    /**
     *    author:  Sanjeev Kumar Gupta
     *    created: 05.02.2026 22:42:57
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
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(auto &it: v) {
            cin>>it;
            it%=k;
            if(!it){ //v[i]==0
                it=k;
            }
        }
 
        vector<int> order(n);
        iota(order.begin(),order.end(),0);
 
        stable_sort(order.begin(),order.end(), [&](int i,int j){ //lambda fxn
            return v[i]>v[j];
        });
 
        for(auto &i: order){
            cout<<i+1<<" ";
        }
        cout<<endl;
        
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