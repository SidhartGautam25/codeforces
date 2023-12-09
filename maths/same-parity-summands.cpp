#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll n,k;
    cin>>n>>k;
    if(n%2==1 and k%2==0){
        cout<<"NO"<<endl;
        return;
    }else if(n%2==0 and k%2==1){
        ll sum=2*(k-1);
        if(n<=sum){
            cout<<"NO"<<endl;
            return;
        }else{
            ll rem=n-sum;
            cout<<"YES"<<endl;
            for(int i=0;i<k-1;i++){
                cout<<"2 ";
            }
            cout<<rem<<endl;
            return;
        }

    }else{
        ll sum=k-1;
        if(n<=sum){
            cout<<"NO"<<endl;
            return;
        }else{
            ll rem=n-sum;
            cout<<"YES"<<endl;
            for(int i=0;i<k-1;i++){
                cout<<"1 ";
            }
            cout<<rem<<endl;
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