#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=1;
    for(int k=n;k>0;k--){
        vector<int>temp(n+1,0);
        int curr=0;
        bool done=true;
        for(int i=0;i<n;i++){
            curr=curr+temp[i];
            if(s[i]=='1'){
                if(curr%2==0){
                    continue;
                }else{
                    if(i+k<=n){
                        temp[i+1]=temp[i+1]+1;
                        temp[i+k]=temp[i+k]-1;

                    }else{
                        done=false;
                        break;
                    }

                }

            }else{
                if(curr%2==1){
                    continue;
                }else{
                    if(i+k<=n){
                        temp[i+1]=temp[i+1]+1;
                        temp[i+k]=temp[i+k]-1;

                    }else{
                        done=false;
                        break;
                    }

                }

            }
        }
        if(done){
            ans=k;
            break;
        }
    }
    cout<<ans<<endl;
   
    
   
}
 

 
signed main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        solve();
        
    }
    return 0;
}