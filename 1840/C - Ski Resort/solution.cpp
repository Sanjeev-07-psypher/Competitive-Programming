    /**
     *    author:  Sanjeev Kumar Gupta
     *    created: 16.03.2026 16:05:17
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
        ll n,k,q;
        cin>>n>>k>>q;
        vector<ll> v(n);
        for(auto &it:v) cin>>it;
        ll ans=0;
        ll currSegment=0;
        bool flag=true;
        for(int i=0;i<n;i++){
            if(v[i]>q){
                flag=false;
                break;
            }
        }
        ll x=0;
        if(flag){
            x=n-k+1;
            ans+=(x*(x+1))/2;
            cout<<ans<<endl;
            return;
        }
        for(int i=0;i<n;i++){
            if(v[i]<=q){
                currSegment++;
            }
            else if(v[i]>q){
                if(currSegment>=k){
                    x=currSegment-k+1;
                    ans+=((x*(x+1))/2);
                }
                currSegment=0;
            }
        }
        if(currSegment>=k){
                    x=currSegment-k+1;
                    ans+=((x*(x+1))/2);
                }
        cout<<ans<<endl;
    }
 
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