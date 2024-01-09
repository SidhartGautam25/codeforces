#include <bits/stdc++.h>
using namespace std;

void solve(){
   string s;
   cin>>s;
   int count=0;
   int n=s.size();
   for(int i=0;i<n;i++){
      char c=s[i];
      if(c=='?'){
        count++;
      }
   }
   long long ans;
   char first=s[0];
   if(first=='?'){
    ans=pow(10,count-1)*9;
          
   }else if(
    first=='0'){
    ans=0;
   }
   else if(count==0){
    ans=1;
   }
   else{
    ans=pow(10,count);
   }
   cout<<ans<<endl;

}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
