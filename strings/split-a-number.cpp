#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mod 1000000007
 
 
 
 
void solve(){  
    int n;
    cin>>n;
    string num;
    cin>>num;
    int i=0;
    int next=n/2;
    if(num[next]=='0'){
        int temp1=next;
        while(temp1<n and num[temp1]=='0'){
            temp1++;

        }
        int temp2=next;
        while(temp2>=0 and num[temp2]=='0'){
            temp2--;
        }
        

    }else{
        int temp1=;
        int temp2=;

    }
   



   
 
  
 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t=1;
   
 
    while(t>0){
    
        solve();
        cout<<endl;
        t=t-1;
     }
 
    return 0;
}