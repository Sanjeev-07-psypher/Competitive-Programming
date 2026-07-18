#include <bits/stdc++.h>
using namespace std;
 
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define sz(x) (int)(x).size()
#define pb push_back
 
typedef vector<int> vi;
typedef vector<vi> vvi;
 
const int MAXA = 1e6 + 5;
bool vis[MAXA];
 
void solve() {
    int n;
    cin >> n;
    vvi S(n);
    
    rep(i, 0, n) {
        int l; 
        cin >> l;
        vi a(l);
        rep(j, 0, l) cin >> a[j];
        
        vi cur, clear_vis;
        // Reverse array and keep only first occurrences
        for(int j = l - 1; j >= 0; --j) {
            if(!vis[a[j]]) {
                vis[a[j]] = 1;
                cur.pb(a[j]);
                clear_vis.pb(a[j]);
            }
        }
        
        // Clear local seen array for next blog
        for(int x : clear_vis) vis[x] = 0;
        S[i] = cur;
    }
 
    vi Q, q_clear;
    vi used(n, 0);
 
    // Greedily pick the optimal sequence n times
    rep(step, 0, n) {
        int best_idx = -1;
        vi best_F;
        
        rep(i, 0, n) {
            if(used[i]) continue;
            
            vi F_i;
            for(int x : S[i]) {
                if(!vis[x]) F_i.pb(x);
            }
            
            if(best_idx == -1 || F_i < best_F) {
                best_F = F_i;
                best_idx = i;
            }
        }
        
        used[best_idx] = 1;
        for(int x : best_F) {
            Q.pb(x);
            vis[x] = 1;
            q_clear.pb(x);
        }
    }
    
    // Clear global state cleanly for next testcase
    for(int x : q_clear) vis[x] = 0;
 
    rep(i, 0, sz(Q)) {
        cout << Q[i] << (i == sz(Q) - 1 ? "" : " ");
    }
    cout << "
";
}
 
int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    
    int t = 1;
    if (cin >> t) {
        while(t--) {
            solve();
        }
    }
    return 0;
}