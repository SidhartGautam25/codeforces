#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"0"<<endl;
        return;
    }
    int a1,b1,c1,a2,b2,c2;
    a1=b1=c1=a2=b2=c2=0;

    while(a>0 and a%2==0){
        a1++;
        a=a/2;
    }
    while(a>0 and a%3==0){
        b1++;
        a=a/3;
    }
    while(a>0 and a%5==0){
        c1++;
        a=a/5;
    }
    while(b>0 and b%2==0){
        a2++;
        b=b/2;
    }
    while(b>0 and b%3==0){
        b2++;
        b=b/3;
    }
    while(b>0 and b%5==0){
        c2++;
        b=b/5;
    }
    if(a==b){
        int ans=abs(a1-a2)+abs(b1-b2)+abs(c1-c2);
        cout<<ans<<endl;
        return;
    }else{
        cout<<"-1"<<endl;
        return;
    }

   
 
 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    //cin>>t;
    while(t--){
        solve();
     }

    return 0;
}