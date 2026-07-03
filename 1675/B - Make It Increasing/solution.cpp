/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 23.01.2026 20:14:57
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
void vin(vi &a, ll n)
{
    a.resize(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
}
 
void pin(const vi &a)
{
    for (size_t i = 0; i < a.size(); i++)
    {
        cout << a[i] << (i == a.size() - 1 ? "" : " ");
    }
    cout << endl;
}
 
// --- Main Solve Function ---
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &it : arr)
    {
        cin >> it;
    }
    int ops = 0;
    if (n == 1)
        cout << 0 << endl;
    else
    {
        for (int i = n - 1; i > 0; i--)
        {
            while (arr[i] <= arr[i - 1])
            {
                ops++;
                arr[i - 1] /= 2;
                if(arr[i]==0) {
                    cout<<-1<<endl;
                    return;
                }
            }
            if (arr[i] == 0 && arr[i - 1] == 0)
            {
                cout << -1 << endl;
                return;
            }
        }
 
        cout << ops << endl;
    }
}
 
// --- Main Function ---
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
 
    return 0;
}