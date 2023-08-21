#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   char c=s[0];
   int ind=0;
   for(int i=1;i<n;i++){
       char temp=s[i];
       if(temp<=c){
        ind=i;
        c=temp;
       }
   }
   if(ind==0){
       cout<<s<<endl;
   }else{
    string ans=c+s.substr(0,ind)+s.substr(ind+1);
    cout<<ans<<endl;
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