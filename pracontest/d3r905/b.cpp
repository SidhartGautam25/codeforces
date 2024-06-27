#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX



void solve(){
    int n,k;
   cin>>n>>k;
    string s;
    cin>>s;
    map<char,int>mp;
    for(int i=0;i<n;i++){
        char c=s[i];
       
        mp[c]++;
    }
    int odd=0;
    int even=0;
    for(auto it:mp){
        int count=it.second;
      
        if(count%2==1){
            odd++;
        }else{
            even++;
        }
    }
    //cout<<"odd "<<odd<<endl;
    if(odd>(k+1)){
        cout<<"NO"<<endl;
        return;
    }else{
         cout<<"YES"<<endl;
         return;
       

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