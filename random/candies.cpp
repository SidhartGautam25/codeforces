#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   if(n%2==0){
    cout<<-1<<endl;
    return;
   }
   vector<int>v;
   while(n>0){
    if(n%2==0){
        v.push_back(0);
    }else{
        v.push_back(1);
    }
    n=n/2;
   }
   int s=v.size();
   cout<<v.size()-1<<endl;
   for(int i=s-1;i>0;i--){
    if(v[i]==1){
       cout<<2<<" ";
    }else{
       cout<<1<<" ";
    }
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