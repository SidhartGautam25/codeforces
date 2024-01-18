#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007




void solve(){  
    int n;
    cin>>n;
    string str;
    cin>>str;
    ll count=0;
    int prev;
    int j;
    int k=0;
    while(str[k]=='B'){
        k++;
    }
    prev=k;
    if(k==n){
        cout<<count<<endl;
        return;
    }else{
         for(int i=k;i<n;i++){
        char c=str[i];
        if(c=='A'){
            continue;
        }else{
            count=count+(i-prev);
            prev=i;
        }
    }    
    }
    cout<<count<<endl;
   
 
  

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