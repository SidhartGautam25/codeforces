#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
   int n,x;
   cin>>n>>x;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int i=0;
   int count=0;
   int lastunsortedindex=-1;
   for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
        lastunsortedindex=i;
    }

   }
   if(lastunsortedindex==-1){
     cout<<"0"<<endl;
     return;
   }
   while(i<=lastunsortedindex){
    if(arr[i]>x){
       int temp=arr[i];
       arr[i]=x;
       x=temp;
       count++;
    }
    i++;

   }
   int k=1;
   for(k=1;k<n;k++){
    if(arr[k]>=arr[k-1]){
       continue;
    }else{
        break;
    }
   }
   if(k==n){
    cout<<count<<endl;
    return;
   }
   cout<<"-1"<<endl;
 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t>0){
    
        solve();
        t=t-1;
     }

    return 0;
}