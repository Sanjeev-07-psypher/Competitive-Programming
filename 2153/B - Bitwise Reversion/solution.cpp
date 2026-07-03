/**
 *    author:  Sanjeev Kumar Gupta
 *    created: 10.10.2025 21:30:00
**/
 
#include <bits/stdc++.h>
using namespace std;
 
bool possible(int x, int y, int z) {
    for (int i = 0; i < 31; i++) {
        int xi = (x >> i) & 1;
        int yi = (y >> i) & 1;
        int zi = (z >> i) & 1;
 
        if ((xi == 1 && yi == 1 && zi == 0) ||  
            (xi == 1 && yi == 0 && zi == 1) ||  
            (xi == 0 && yi == 1 && zi == 1))    
            return false;
    }
    return true;
}
 
void solve() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        cout << (possible(x, y, z) ? "YES" : "NO") << "
";
    }
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}