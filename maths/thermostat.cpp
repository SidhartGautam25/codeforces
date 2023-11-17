#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int l,r,x;
    cin>>l>>r>>x;
    int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"0"<<endl;
        return;
    }
    if(abs(a-b)>=x){
        cout<<"1"<<endl;
        return;
    }
    else if(abs(l-r)<x){
        cout<<"-1"<<endl;
        return;
    }else if(abs(l-r)==x){
        if(abs(a-b)==x){
             cout<<"1"<<endl;
             return;

        }else{
            cout<<"-1"<<endl;
            return;

        }
    }else{
       if(a<b){
          if(abs(b-r)>=x or abs(l-a)>=x){
            cout<<"2"<<endl;
            return;
          }else if(abs(l-b)>=x and abs(r-a)>=x){
            cout<<"3"<<endl;
          }else{
            cout<<"-1"<<endl;
            return;
          }

       }else{
        if(abs(r-a)>=x or abs(l-b)>=x){
            cout<<"2"<<endl;
            return;
        }else if(abs(l-a)>=x and abs(b-r)>=x){
            cout<<"3"<<endl;
            return;
        }else{
            cout<<"-1"<<endl;
            return;
        }

       }
    }
 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        solve();
     }

    return 0;
}