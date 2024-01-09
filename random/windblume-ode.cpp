#include <bits/stdc++.h>
using namespace std;


bool isprime(long long n){
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
 
    return true;

}

void solve(){
   int n;
   cin>>n;
   vector<int>arr(n);
   long long sum=0;
   int ind=-1;
   for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    arr[i]=temp;
    sum=sum+temp;
    if(temp%2==1){
        ind=i;
    }
   }
   if(isprime(sum)==false){
       cout<<n<<endl;
       for(int i=0;i<n;i++){
        cout<<i+1<<" ";
       }
       cout<<endl;
   }else{
    cout<<n-1<<endl;
    for(int i=0;i<n;i++){
        if(i==ind){
            continue;
        }else{
            cout<<i+1<<" ";
        }
    }
    cout<<endl;

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