#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007



void solve(){
  
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    //vector<bool>vis(n,false);
    map<int,char>mp;
    for(int i=0;i<n-k;i++){
        if(s[i]=='?'){
            if(mp.find(i%k) != mp.end()){
                s[i]=mp[i%k];
                continue;
            }
            int j=i+k;
            while(j<n){
                if(s[j] != '?'){
                    s[i]=s[j];
                    
                    break;
                }
                j=j+k;
            }
            mp[i%k]=s[i];

        }
    }
    for(int i=0;i<n-k;i++){
        if(s[i] != '?'){
               int j=i+k;
               if(s[j] != '?'){
                   if(s[i]==s[j]){
                       continue;
                   }else{
                       cout<<"NO"<<endl;
                       return;
                   }
               }
        }
    }
    int countz=0;
    int counto=0;
    int count=0;
    for(int i=0;i<k;i++){
        if(s[i]=='0'){
            countz++;
        }else if(s[i]=='1'){
            counto++;
        }else{
            count++;
        }
    }
    if(countz<=(k/2) and counto<=(k/2)){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    return;
    
   
   
 
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