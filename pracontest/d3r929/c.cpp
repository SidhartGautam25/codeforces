#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int a,b,l;
    cin>>a>>b>>l;
    int count=0;
    set<int>ms;
    for(int i=0;i<33;i++){
        int temp=l;
        bool done=true;
        for(int j=0;j<i;j++){
            if(temp>0){
                if(temp%a==0){
                    temp=temp/a;
                }else{
                    done=false;
                    break;
                }
            }else{
                done=false;
                break;
            }
        }
        if(done){
            while(temp>0){
                ms.insert(temp);
                if(temp%b==0){
                    count++;
                    temp=temp/b;

                }else{
                    break;
                }
            }


        }
    }
    cout<<ms.size()<<endl;
   
}
 

 
signed main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        solve();
        
    }
    return 0;
}