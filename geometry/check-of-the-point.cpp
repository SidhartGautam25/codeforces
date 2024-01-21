#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mod 1000000007
 
 
 
 
void solve(){  
    int a,x,y;
    cin>>a>>x>>y;
    if(x>a or y>a or x<0 or y>0 ){
        cout<<"2"<<endl;
        return;
    }else if(x==0 or y==0 or x==a or y==a){
        cout<<"1"<<endl;
        return;
    }else{
        cout<<"1"<<endl;
        return;
    }

 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t=1;
   
 
    while(t>0){
    
        solve();
        cout<<endl;
        t=t-1;
     }
 
    return 0;
}