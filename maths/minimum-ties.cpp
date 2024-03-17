
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX


void solve(){
   
        int n;
        cin>>n;
        if(n%2==0){
            for(int i=1;i<n;i++){
                int res;
                if(i%2==0){
                    res=-1;
                }else{
                    res=0;
                }
                for(int j=i+1;j<=n;j++){
                    cout<<res<<" ";
                    if(res==0){
                        res=1;
                    }else{
                        res=-res;
                    }
                    
                }
            }
            cout<<endl;

        }else{
            for(int i=1;i<n;i++){
                int res=1;
                for(int j=i+1;j<=n;j++){
                    cout<<res<<" ";
                    res=-res;
                }
            }
            cout<<endl;
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