#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
   int n;
   cin>>n;
   if(n%2==0){
    cout<<"-1"<<endl;
    return;
   }
   int x=0;
   int i=0;
   vector<int>a(n);
   vector<int>b(n);
   vector<int>c(n);
   while(i<n){
     a[i]=x;
     b[i]=x;
     c[i]=i;
     i=i+2;
     x++;
   }
   i=1;
   while(i<n){
    a[i]=x;
    b[i]=x;
    c[i]=i;
    x++;
    i=i+2;
   }
i=0;
while(i<n){
    cout<<a[i]<<" ";
    i++;
}
cout<<endl;
i=0;
while(i<n){
    cout<<b[i]<<" ";
    i++;
}
cout<<endl;
i=0;
while(i<n){
    cout<<c[i]<<" ";
    i++;
}
cout<<endl;
   
 
 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    //cin>>t;
    while(t--){
        solve();
     }

    return 0;
}