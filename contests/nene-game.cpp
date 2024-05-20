#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
       int n;
       cin>>n;
       vector<vector<int>>ans(n,vector<int>(n,0));
       int lim=(n+1)/2;
       long long sum=0;
       int x=1;
       sum=sum+lim*((n*(n+1))/2);
       for(int i=lim+1;i<=n;i++){
        sum=sum+i*n;
       }
       int count=0;
       for(int i=0;i<n;i++){
           if(x*lim<((lim*(lim+1))/2)){
               count++;
              
            //   cout<<"sum "<<sum<<endl;
            //   cout<<"first "<<x*lim<<endl;
            //   cout<<" s"<<((lim*(lim+1))/2)<<endl;
               sum=sum+(lim*(lim+1))/2;
               sum=sum-x*lim;
               x++;
           }
       }
       cout<<sum<<" "<<(n+lim+count)<<endl;
       for(int i=0;i<n;i++){
         cout<<"2 "<<i+1<<" ";
         for(int j=1;j<=n;j++){
            cout<<j<<" ";
         }
         cout<<endl;
       }
       for(int i=1;i<=lim;i++){
        cout<<"1 "<<i<<" ";
        for(int j=1;j<=n;j++){
             cout<<j<<" ";
        }
        cout<<endl;
       }
       for(int i=0;i<count;i++){
           cout<<"2 "<<i+1<<" ";
           for(int j=1;j<=n;j++){
               cout<<j<<" ";
           }
           cout<<endl;
       }
        
 
    
}
int main(){
    //consider number of test cases
    int isham_test;
    cin>>isham_test;
    while(isham_test--){
        isham_function();
    }
    return 0;
}