#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n;
    cin>>n;
    if(n%2==0){
        int x=n/2;
        cout<<x<<" "<<x<<endl;
        return;
    }else{
        if(n%10==9){
            if((n/10)%2==0){
                int temp=n-9;
                int mul=temp/2;
                int x=mul+5;
                int y=mul+4;
                cout<<x<<" "y<<endl;
                return;

            }else{
                if(n==19){
                     cout<<14<<" "<<5<<endl;
                     return;
                }else{
                    int temp=n-9;
                    int x,y;
                    temp=temp-30;
                    temp=temp/2;
                    x=temp+;
                    y=emp+30+

                }
            }


        }else{
            int x=n/2;
            int y=x+1;
            cout<<x<<" "<<y<<endl;
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