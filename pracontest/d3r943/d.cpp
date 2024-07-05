#include <bits/stdc++.h>
#define int long long
using namespace std;


int Total(vector<int>&a,vector<int>&p,int&k,int start,int n){
    int sum=0;
    vector<bool>vis(n+1,false);
    int i=start;
    int ind=start,mmax=a[start];
    int total=0;
    int steps=0;
    while(!vis[i] && steps<k){
        total=max(total,sum+a[i]*(k-steps));
        sum=sum+a[i];
        vis[i]=true;
        i=p[i];
        steps++;
    }
    return total;
}

void solve(){
   int n,k,b,s;
   cin>>n>>k>>b>>s;
   vector<int>p(n+1);
   vector<int>a(n+1);
   for(int i=1;i<=n;i++){
      cin>>p[i];
   }
   for(int i=1;i<=n;i++){
      cin>>a[i];
   }
   int t1=Total(a,p,k,b,n);
   int t2=Total(a,p,k,s,n);
   //cout<<"t1 "<<t1<<"  t2 "<<t2<<endl;
   if(t1==t2){
      cout<<"Draw"<<endl;
      return;
   }else if(t1>t2){
      cout<<"Bodya"<<endl;
      return;
   }
   cout<<"Sasha"<<endl;


}
 

 
signed main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        solve();
        
    }
    return 0;
}