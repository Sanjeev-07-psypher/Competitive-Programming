/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 12.06.2026 20:53:42
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
 
void solve2() {
    int n, k;
    cin >> n >> k;
    
    // 1. Let the map do the heavy lifting of sorting and counting
    map<int, int> counts;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        counts[x]++; 
    }
 
    // 2. Move the map data into a list of pairs (value, count) so we can look forward/backward
    vector<pair<int, int>> steps(counts.begin(), counts.end());
    int m = steps.size();
    
    // is_winning_jump[i] = "If I jump to steps[i], do I win?"
    vector<bool> is_winning_jump(m, false);
    
    int valid_winning_jumps_ahead = 0;
    int right = m - 1; // Our "lookahead" window boundary
    bool arseniy_can_win = false;
 
    // 3. Work backwards from the highest step down to the lowest
    for (int i = m - 1; i >= 0; i--) {
        int current_val = steps[i].first;
        int count = steps[i].second;
 
        // Slide our window: Forget about steps that are too far away (> k)
        while (right > i && steps[right].first - current_val > k) {
            if (is_winning_jump[right] == true) {
                valid_winning_jumps_ahead--;
            }
            right--;
        }
 
        // Does the NEXT player have a winning jump available?
        bool next_player_has_winning_jump = (valid_winning_jumps_ahead > 0);
 
        // If the next player has NO good jumps, we play Hot Potato with the duplicates.
        // I only win if the count is ODD.
        if (next_player_has_winning_jump == false && count % 2 != 0) {
            is_winning_jump[i] = true; 
        } else {
            is_winning_jump[i] = false;
        }
 
        // Add this step to our "lookahead" tracker for the steps behind us
        if (is_winning_jump[i] == true) {
            valid_winning_jumps_ahead++;
        }
 
        // 4. Arseniy's Goal:
        // Arseniy takes the first turn, making him the "jumper". Egor is the "next player".
        // Arseniy wants the jumper to LOSE so that the next player (Egor) WINS.
        if (is_winning_jump[i] == false) {
            arseniy_can_win = true;
        }
    }
 
    if (arseniy_can_win) {
        cout << "YES
";
    } else {
        cout << "NO
";
    }
}
 
// --- Main Solve Function ---
void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(auto &it:v) cin>>it;
 
    map<ll,ll> mp;
    for(auto &x: v){
        mp[x]++;
    }
 
    vector<pair<ll,ll>> p;
    for(auto x: mp){
        p.push_back({x.first,x.second});
    }
 
    ll m=p.size();
    vector<bool> check(m,false);
 
    ll l=0;
    ll r=m-1;
    bool flag=false;
    for(int i=m-1;i>=0;i--){
        ll curr=p[i].first;
        ll count=p[i].second;
 
        while(r>i && p[r].first-curr>k){
            if(check[r]){
                l--;
            }
            r--;
        }
        bool flag2= (l>0);
 
        if(!flag2 && count%2!=0){
            check[i]=true;
        } else check[i]=false;
 
        if(check[i]) l++;
        if(!check[i]) flag=true;
    }
 
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 
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