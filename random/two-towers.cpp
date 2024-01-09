#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n,m;
   cin>>n>>m;
   string str1,str2;
   
   cin>>str1>>str2;
   reverse(str2.begin(),str2.end());
   string final=str1+str2;
   int count=0;
   for(int i=1;i<final.size();i++){
       if(final[i]==final[i-1]){
           count++;
       }
   }
   if(count==1 or count==0){
       cout<<"YES"<<endl;
   }else{
       cout<<"NO"<<endl;
   }
}


int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}