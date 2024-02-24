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
        int x=0;
        int y=0;
        int i=1;
        bool gx=true;
        while(n>0){
            int d=n%10;
            n=n/2;
            int d1=d/2;
            int d2=d-d1;
            if(d1==d2){
                x=x+d1*i;
                y=y+d2*i;
                i++;
            }else{
                if(gx){
                    gx=false;
                    x=x+d2*i;
                    y=y+d1*i;
                    i++;
                }else{
                    gx=true;
                    x=x+d1*i;
                    y=y+d2*i;
                    i++;
                }
            }


        }
    }
    cout<<x<<" "<<y<<endl;
    return;
 
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