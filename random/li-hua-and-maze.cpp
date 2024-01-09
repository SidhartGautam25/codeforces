#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n,m;
   cin>>n>>m;
   int x1,y1,x2,y2;
   cin>>x1>>y1>>x2>>y2;
   if((x1==1 and y1==1) or (x1==1 and y1==m) or (x1==n and y1==1) or (x1==n and y1==m)){
         cout<<"2"<<endl;
   }else if((x2==1 and y2==1) or (x2==1 and y2==m) or (x2==n and y2==1) or (x2==n and y2==m)){
        cout<<"2"<<endl;
   }else if(x1==1 or y1==1 or x1==n or y1==m){
        cout<<"3"<<endl;
   }else if(x2==1 or y2==1 or x2==n or y2==m){
        cout<<"3"<<endl;
   }else{
        cout<<"4"<<endl;
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