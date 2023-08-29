#include <bits/stdc++.h>
using namespace std;

void solve(){
   string s,t;
   cin>>s>>t;
   unordered_set<char>ms;
   int count=0;
   for(int i=0;i<t.size();i++){
    char temp=t[i];
    if(temp=='a'){
        count++;
    }
    ms.insert(temp);
   }
   if(t=="a"){
    cout<<1<<endl;
    return;
   }
   if(ms.find('a') != ms.end()){
    cout<<-1<<endl;
    return;
   }
   else{
    long long ans=pow(2,s.size());
    cout<<ans<<endl;
    return;
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