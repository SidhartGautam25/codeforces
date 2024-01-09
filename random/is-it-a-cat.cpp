#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   transform(s.begin(), s.end(), s.begin(),
    [](unsigned char c){ return std::tolower(c); });
   
   if(s.size()<4){
    cout<<"NO"<<endl;
    return;
   }
   int i=0;
   while(s[i]=='m'){
    i++;
   }
   if(i==0 or s[i] != 'e'){
     cout<<"NO"<<endl;
     return;
   }
   bool efound=false;
   while(s[i]=='e'){
    efound=true;
    i++;
   }
   if(s[i] != 'o' or efound==false){
       cout<<"NO"<<endl;
       return;
   }
   bool ofound=false;
   while(s[i]=='o'){
      ofound=true;
      i++;
   }
   if(s[i] != 'w'){
      cout<<"NO"<<endl;
      return;
   }
   while(s[i] == 'w'){
    i++;
   }
   if(i != n){
         cout<<"NO"<<endl;
         return;
   }
   cout<<"YES"<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}