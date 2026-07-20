/**
 * author:  Sanjeev Kumar Gupta
 * created: 14.07.2026 20:29:38
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
const int mod1 = 1e9+7;
const int mod2 = 1e9+9;
 
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
 
ll gcd(ll a, ll b){
    a=llabs(a);
    b=llabs(b);
    while(b!=0){
        ll r = a%b;
        a=b;
        b=r;
    }
    return a;
}
 
ll lcm(ll a, ll b){
   if(a==0 || b==0) return 0;
   return (a / gcd(a,b)) * b;
}
 
// --- Hash Structures and Helpers ---
ll base1, base2;
vector<ll> pow1, pow2;
 
void init_hashes(int N) {
    static bool initialized = false;
    if (!initialized) {
        mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
        base1 = uniform_int_distribution<ll>(300, 100000)(rng);
        base2 = uniform_int_distribution<ll>(300, 100000)(rng);
        pow1.resize(N + 5);
        pow2.resize(N + 5);
        pow1[0] = 1; pow2[0] = 1;
        for (int i = 1; i <= N + 4; i++) {
            pow1[i] = (pow1[i - 1] * base1) % mod1;
            pow2[i] = (pow2[i - 1] * base2) % mod2;
        }
        initialized = true;
    } else if ((int)pow1.size() < N + 5) {
        int old_sz = pow1.size();
        pow1.resize(N + 5);
        pow2.resize(N + 5);
        for (int i = old_sz; i <= N + 4; i++) {
            pow1[i] = (pow1[i - 1] * base1) % mod1;
            pow2[i] = (pow2[i - 1] * base2) % mod2;
        }
    }
}
 
struct PolyHash {
    vector<ll> h1, h2;
    void build(const vector<ll>& v) {
        int n = v.size();
        h1.assign(n + 1, 0);
        h2.assign(n + 1, 0);
        for (int i = 0; i < n; i++) {
            h1[i + 1] = (h1[i] * base1 + v[i]) % mod1;
            h2[i + 1] = (h2[i] * base2 + v[i]) % mod2;
        }
    }
    pair<ll, ll> get(int start, int len) {
        if (len <= 0) return {0, 0};
        ll ans1 = (h1[start + len] - h1[start] * pow1[len]) % mod1;
        ll ans2 = (h2[start + len] - h2[start] * pow2[len]) % mod2;
        if (ans1 < 0) ans1 += mod1;
        if (ans2 < 0) ans2 += mod2;
        return {ans1, ans2};
    }
};
 
pair<ll, ll> combine(pair<ll, ll> hash1, pair<ll, ll> hash2, int len2) {
    ll ans1 = (hash1.first * pow1[len2] + hash2.first) % mod1;
    ll ans2 = (hash2.second * pow2[len2] + hash2.second) % mod2; // Wait, typo check: hash1.second * pow2[len2]
    ans2 = (hash1.second * pow2[len2] + hash2.second) % mod2;
    return {ans1, ans2};
}
 
int min_cyclic_shift(const vector<ll>& v) {
    int n = v.size();
    vector<ll> w = v;
    w.insert(w.end(), v.begin(), v.end());
    int i = 0, j = 1;
    while (i < n && j < n) {
        int k = 0;
        while (k < n && w[i + k] == w[j + k]) k++;
        if (k == n) break;
        if (w[i + k] > w[j + k]) {
            i += k + 1;
            if (i <= j) i = j + 1;
        } else {
            j += k + 1;
            if (j <= i) j = i + 1;
        }
    }
    return min(i, j);
}
 
// --- Main Solve Function ---
void solve() {
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];
    init_hashes(n);
    vector<ll> L, M, R;
    for (int i = 0; i < x; i++) L.pb(p[i]);
    for (int i = x; i < y; i++) M.pb(p[i]);
    for (int i = y; i < n; i++) R.pb(p[i]);
    int m = M.size();
    if (m > 0) {
        int shift = min_cyclic_shift(M);
        rotate(M.begin(), M.begin() + shift, M.end());
    }
    vector<ll> A = L;
    A.insert(A.end(), R.begin(), R.end());
    PolyHash hashA, hashM;
    hashA.build(A);
    hashM.build(M);
    auto get_hash = [&](int k, int len) -> pair<ll, ll> {
        if (len <= k) return hashA.get(0, len);
        if (len <= k + m) {
            auto h1 = hashA.get(0, k);
            auto h2 = hashM.get(0, len - k);
            return combine(h1, h2, len - k);
        }
        auto h1 = hashA.get(0, k);
        auto h2 = hashM.get(0, m);
        auto h3 = hashA.get(k, len - m - k);
        return combine(combine(h1, h2, m), h3, len - m - k);
    };
    auto get_val = [&](int k, int idx) -> ll {
        if (idx < k) return A[idx];
        if (idx < k + m) return M[idx - k];
        return A[idx - m];
    };
    int best_k = 0;
    int lim = n - m;
    for (int k = 1; k <= lim; k++) {
        int low = 0, high = n, lcp = 0;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (get_hash(best_k, mid) == get_hash(k, mid)) {
                lcp = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        if (lcp < n) {
            if (get_val(k, lcp) < get_val(best_k, lcp)) {
                best_k = k;
            }
        }
    }
    vector<ll> ans;
    for (int i = 0; i < n; i++) ans.pb(get_val(best_k, i));
    pin(ans);
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