#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mod 1000000007
 
 
 
 
void solve(){  
    string s;
    cin>>s;
    int n=s.size();
    int i=0;
    while(i<n and s[i] == 'a'){
        i++;
    }
    if(i==n){
        cout<<s<<endl;
        return;
    }
    while(i<n and s[i] != 'a'){
        s[i]=s[i]-1;
    }
    cout<<s<<endl;
  
   
 
  
 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t=1;
    //cin>>t;
 
    while(t>0){
    
        solve();
        cout<<endl;
        t=t-1;
     }
 
    return 0;
}