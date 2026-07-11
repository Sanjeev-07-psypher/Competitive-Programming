#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll t;
    cin>>t;
 
    while(t--){
        ll n,d,k;
        cin>>n>>d>>k;
 
        ll m=n-d+1;
 
        vector<ll> diff(m+3,0);
 
        for(ll i=0;i<k;i++){
            ll l,r;
            cin>>l>>r;
 
            ll L=max(1LL,l-d+1);
            ll R=min(m,r);
 
            if(L<=R){
                diff[L]++;
                diff[R+1]--;
            }
        }
 
        ll cur=0;
        ll mx=-1,mn=LLONG_MAX;
        ll brother=1,mother=1;
 
        for(ll s=1;s<=m;s++){
            cur+=diff[s];
 
            if(cur>mx){
                mx=cur;
                brother=s;
            }
 
            if(cur<mn){
                mn=cur;
                mother=s;
            }
        }
 
        cout<<brother<<" "<<mother<<endl;
    }
 
    return 0;
}