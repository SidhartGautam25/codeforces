#include <bits/stdc++.h>
using namespace std;

#define ll long long



void solve(){
    ll n;
    cin>>n;
    //first case 3n type
    if(n%3==0){
        if(n<12){
            cout<<"NO"<<endl;
            return;
        }
        int temp=n/3;
        temp=temp-1;
        ll x=0;
        ll y=1;
        ll z=temp-(x+y);
        ll first=3*x+1;
        ll sec=3*y+1;
        ll third=3*z+1;
        cout<<"YES"<<endl;
        cout<<first<<" "<<sec<<" "<<third<<endl;
        return;
    }else if(n%3==1){
        if(n<7){
            cout<<"NO"<<endl;
            return;
        }else{
            ll temp=(n-1)/3;
            temp=temp-1;
            ll x=0;
            ll y=1;
            ll z=temp-1;
            ll first=3*x+1;
            ll sec=3*y+1;
            ll third=3*z+2;
            cout<<"YES"<<endl;
            cout<<first<<" "<<sec<<" "<<third<<endl;
            return;
        }
    }else if(n%3==2){
        if(n<8){
            cout<<"NO"<<endl;
            return;
        }else{
            if(n==8){
                cout<<"YES"<<endl;
                cout<<"1 2 5"<<endl;
                return;
            }
            ll temp=(n-2)/3;
            temp=temp-1;
            ll x=1;
            ll y=0;
            ll z=temp-1;
            ll first=3*x+1;
            ll sec=3*y+2;
            ll third=3*z+2;
            cout<<"YES"<<endl;
            cout<<first<<" "<<sec<<" "<<third<<endl;
            return;
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