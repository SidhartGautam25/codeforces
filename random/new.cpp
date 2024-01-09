#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   
   int a,b;
   int atotal=0;
   int btotal=0;
   cin>>a>>b;
   cin>>n;
   int ans=0;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int i=0;
   while(i<n){
    int e=arr[i];
    if(e<=atotal){
        atotal=atotal-e;
        i++;

    }else if(e<=btotal){
        btotal=btotal-e;
        i++;
    }else{
        int x=ceil((e-atotal)/a);
        int y=ceil((e-btotal)/b);
        int t=min(x,y);
        ans=ans+t;
        atotal=atotal+a*t;
        btotal=btotal+b*t;
    }


   }
   cout<<ans<<endl;


}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}