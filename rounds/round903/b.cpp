#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int a,b,c;
    ll sum;
    cin>>a>>b>>c;
    sum=a+b+c;
    if(a==b and b==c){
        cout<<"YES"<<endl;
        return;
    }
    int smallest;
    int largest;
    int mid;
    smallest=min(a,min(b,c));
    largest=max(a,max(b,c));
    mid=sum-(smallest+largest);
    if(largest%smallest != 0){
        cout<<"NO"<<endl;
        return;
    }else{
        int d=largest/smallest;
        if((d-1)>3){
           cout<<"NO"<<endl;
           return;
        }else if((d-1)==3){
            if(mid==smallest){
                cout<<"YES"<<endl;
                return;
            }else{
                cout<<"NO"<<endl;
                return;
            }
        }else{
            int c1=largest/smallest;
            c1=c1-1;
            if(mid%smallest != 0){
                cout<<"NO"<<endl;
                return;
            }
            int c2=mid/smallest;
            c2=c2-1;
            if(c1+c2<=3){
                cout<<"YES"<<endl;
                return;
            }else{
                cout<<"NO"<<endl;
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