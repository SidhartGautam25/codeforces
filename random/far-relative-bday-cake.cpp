#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    unordered_map<int,int>rmp;
    unordered_map<int,int>cmp;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char c;
            cin>>c;
            if(c=='.'){
                continue;
            }else{
                rmp[i]++;
                cmp[j]++;
            }
        }
    }
    long long ans=0;
    for(auto it:rmp){
        int x=it.second;
      
        ans=ans+x*(x-1)/2;
    }
  
    for(auto it:cmp){
        int x=it.second;
       
        ans=ans+x*(x-1)/2;
    }
    
    cout<<ans<<endl;
}

int main(){
    int t=1;
    while(t--){
        solve();
    }
    return 0;
}