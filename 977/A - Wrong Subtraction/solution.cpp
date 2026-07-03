#include <bits/stdc++.h>
 
 
using namespace std;
 
 
int main(){
    int x,n;
    cin>>n>>x;
    while(x--){
        if(n%10!=0){
            n-=1;
        }
        else{
            n/=10;
        }
    }
    cout<<n<<'
';
}