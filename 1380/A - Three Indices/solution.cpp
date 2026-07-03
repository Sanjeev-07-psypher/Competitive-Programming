    /**
     *    author:  Sanjeev Kumar Gupta
     *    created: 22.01.2026 16:14:19
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
        vector<int> arr(n);
        for(auto &it:arr){
            cin>>it;
        }
        // for(int i=1;i<n-1;i++){
        //     if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
        //         cout<<"YES"<<endl;
        //         cout<<arr[i-1]<<" "<<arr[i]<<" "<<arr[i+1]<<endl;
        //         return;
        //     } 
        // }
        for(int i=0;i<n-2;i++){
            int j=i+1;
            int k= j+1;
            while(true){
                if(arr[i]<arr[j] && arr[j]>arr[k] && k<n && j<n){
                    cout<<"YES"<<endl;
                    cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;;
                    return;
                }
                if(arr[j]<arr[k] && k<n && j<n) k++;
                if(j==n-2) break;
                j++;
                k=j+1;
            }
 
        }
        cout<<"NO"<<endl;
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