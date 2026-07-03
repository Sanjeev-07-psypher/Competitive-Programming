#include<bits/stdc++.h>
using namespace std; 
 
void solve() {
    int n;
    cin>>n;
    vector<vector<int>> v(n, vector<int>(n)) ;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    map<int, int> mp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mp[v[i][j]]++;
        }
    }
    for(auto p:mp){
        if(p.second>(n-1)*n){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
 
int main() {
    int t;
    cin>>t;
    while(t--) solve();
}