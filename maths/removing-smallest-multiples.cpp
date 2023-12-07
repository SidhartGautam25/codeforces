#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    s='1'+s;
    ll cost=0;
    for(int i=1;i<=n;i++){
        if(s[i]=='0' or s[i]=='2'){
            if(s[i]=='0'){
                cost=cost+i;
                s[i]='2';
            }
           
            //cout<<"cost adding "<<i<<endl;
           
            int j=2*i;
            //taaki wo sara ko bhi kam cost me hi krde jo us number ka multiple hai
            //jo pahle hi delete ho chuka hai isse us number se chota me hi usko delete 
            //kr sakte hai
            while(j<=n and (s[j]=='0' or s[j]=='2')){
                if(s[j]=='0'){
                    cost=cost+i;
                    //cout<<"cost adding "<<i<<endl;
                    s[j]='2';

                }
               
                j=j+i;
            }

        }
    }
    cout<<cost<<endl;
 
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
