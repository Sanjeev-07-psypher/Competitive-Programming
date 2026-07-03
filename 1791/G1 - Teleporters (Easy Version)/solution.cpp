#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve() {
    ll n,c;
    cin>>n>>c;
    vector<ll> v(n);
    for(auto &it:v) cin>>it;
    vector<ll> ans(n);
    for(int j=0;j<n;j++){
        ans[j]= v[j]+j+1;
    }
    sort(ans.begin(), ans.end() );
    for(int j=0;j<n;j++){
        if(c<ans[j]){
            cout<<j<<endl;
            return;
        }else{
            c-=ans[j];
        }
    }
    cout<<n<<endl;
}
 
int main() {
    int t;
    cin>>t;
    while(t--){
        solve() ;
    }
}