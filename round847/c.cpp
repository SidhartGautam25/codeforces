#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   //map<int,vector<int>>mp;
   map<int,int>maxmp;
   map<int,int>minmp;
   for(int i=1;i<=n;i++){
      for(int j=0;j<n-1;j++){
        int num;
        cin>>num;
        //mp[num].push_back(j);
        if(maxmp.find(num)==maxmp.end()){
            maxmp[num]=j;
            minmp[num]=j;
        }else{
             maxmp[num]=max(j,maxmp[num]);
        minmp[num]=min(j,minmp[num]);
            
        }
       
      }
   }
   vector<int>ans(n);
   for(int num=1;num<=n;num++){
     //int num=it.first;
     //cout<<"num "<<num<<endl;
      //cout<<"max[num]== "<<maxmp[num]<<" min[num]== "<<minmp[num]<<endl;
     if(maxmp[num]==n-2 and minmp[num]==n-2){
        ans[n-1]=num;
     }else{
        ans[maxmp[num]]=num;
     }

   }
   for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
   }
   cout<<endl;



}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}