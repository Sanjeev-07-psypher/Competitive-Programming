/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 24.12.2025 23:31:24
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
    ll n,k,x;
        cin>>n>>k>>x;
        
        if (x!=1){
            cout << "YES" << endl; 
            cout << n << endl; 
            for (int i=1;i<=n;i++) 
                cout<<1<<" ";
            cout<<endl;
        }
        else{
            if (k == 1 || (k == 2 && n % 2 == 1))
                cout << "NO" << endl; 
            else
            {
                cout << "YES" << endl;
                if (n % 2 == 0)
                {
                    cout << n / 2 << endl; 
                    for (int i = 1; i <= n / 2; i++)
                        cout << 2 << " ";
                    cout << endl;
                }
                else
                {
                    cout << (n - 3) / 2 + 1 << endl; 
                    for (int i = 1; i <= (n - 3) / 2; i++)
                        cout << 2 << " ";
                    cout << 3 << endl; 
                }
            }
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