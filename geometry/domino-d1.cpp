#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

bool check(int l,int b,int k){
    int mmax=l*(b/2);
    if(k>mmax){
        return false;
    }
    if(k%2==0){
        return true;
    }
    return false;

}
void solve(){
   int l,b,k;
   cin>>l>>b>>k;
   if(l%2==0){

     if(check(l,b,k)){
        cout<<"YES"<<endl;
        return;
     }else{
        cout<<"NO"<<endl;
        return;
     }

   }else{
   
    
        int t=b/2;
        if(k<t){
            cout<<"NO"<<endl;
            return;
        }else{
            int used=t;
            int rem=k-used;
            if(check(l-1,b,rem)){
                cout<<"YES"<<endl;
                return;
            }else{
                cout<<"NO"<<endl;
                return;
            }
        }
    

   }


  
  
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        solve();
     }

    return 0;
}