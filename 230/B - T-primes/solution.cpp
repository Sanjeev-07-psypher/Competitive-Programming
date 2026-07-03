    /**
     *    author:  Sanjeev Kumar Gupta
     *    created: 12.06.2026 17:09:03
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
 
    const int N = 1e6+1;
    vector<bool> prime(N,true);
 
    void sieve(){
        prime[0]=prime[1]=false;
        for(ll i=2;i*i<N;i++){
            if(prime[i]){
                for(ll j=i*i;j<N;j+=i){
                    prime[j]=false;
                }
            }
        }
    }
 
    // --- Main Solve Function ---
    void solve() {
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(auto &it:v) cin>>it;
        sieve();
        for(int i=0;i<n;i++){
            ll sq=sqrtl(v[i]);
            if(sq*sq==v[i] && prime[sq]){
                cout<<"YES"<<endl;
            } else cout<<"NO"<<endl;
        }
    }
 
    //--- Main Function ---
    int32_t main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
 
        int t = 1;
        // cin >> t;
        while (t--) {
            solve();
        }
 
        return 0;
    }