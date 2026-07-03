/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 04.06.2026 15:02:03
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
 
 
// --- Main Solve Function ---
void solve() {
    ll n,m;
    cin>>n>>m;
    vector<ll> v(n);
    for(auto &it:v) cin>>it;
 
    vector<ll> mod;
    for(int i=0;i<n;i++){
        ll md = v[i]%m;
        mod.push_back(md);
    }
    srt(mod);
    vector<ll> freq(m,0);
    for(int i=0;i<n;i++){
        freq[mod[i]]++;
    }
 
    ll l=0,r=n-1;
    bool zero=false;
    ll ans=0;
    vector<bool> visited(m,false);
    while(l<=r){
        if(visited[mod[l]]){
             l++;
             continue;
        }
        if(visited[mod[r]]){
            r--;
            continue;
        }
        if(mod[l]==0){
            ans++;
            visited[0]=true;
            l++;
            continue;
        }
        
            if((mod[l]+mod[r])%m==0){
                visited[mod[l]]=true;
                visited[mod[r]]=true;
                if(mod[l]==mod[r]){
                    ans++;
                }
                else {
                    if(abs(freq[mod[l]]-freq[mod[r]])>1){
                        ll mx=max(freq[mod[l]],freq[mod[r]]);
                        ll mn=min(freq[mod[l]],freq[mod[r]]);
                        ll x = mx-mn-1; //extra left
                        ans += x; // single left
                    } 
                    ans++;
                }
                l++;
                r--;
            }
        else if(mod[l]+mod[r]>m){
            ans+=freq[mod[r]];
            visited[mod[r]]=true;
            r--;
        }
        else if(mod[l]+mod[r]<m){
            ans+=freq[mod[l]];
            visited[mod[l]]=true;
            l++;
        }
        
    }
    cout<<ans<<endl;
 
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