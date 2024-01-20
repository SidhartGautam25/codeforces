#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mod 1000000007
 
 
 
 
void solve(){      
    ll n,k;
    cin>>n>>k;
    vector<char>characters(k);
    char c='a';
    for(int i=0;i<k;i++){
        characters[i]=c;
        c=c+1;
    } 
    string ans="";
    if(k==1){
        while(ans.size()<n){
            ans=ans+characters[0];
        }
        cout<<ans<<endl;
        return;
    }else if(k==2){
        bool op=true;
        while(ans.size()<n){
            if(op){
                if(ans.size()==(n-1)){
                    ans=ans+characters[0];
                }else{
                    ans=ans+characters[0];
                    ans=ans+characters[1];
                }
                op=false;
                
            }else{
                  if(ans.size()==(n-1)){
                    ans=ans+characters[1];
                }else{
                    ans=ans+characters[1];
                    ans=ans+characters[0];
                }
                op=true;
                
            }
        }
        cout<<ans<<endl;
        return;
    }
    int x=0;
    while(x<k and ans.size()<n){
        if(ans.size()==(n-1)){
            ans=ans+characters[x];
        }else{
            ans=ans+characters[x];
            ans=ans+characters[x];
        }
        x++;
    }
    int i=0;
    while(ans.size()<n){
        int j=0;
        while(j<k){
            if(j<i){
                j++;
                continue;
            }else{
                if(ans.size()==(n-1)){
                    ans=ans+characters[i];
                    j++;
                }else if(ans.size()==n){
                    break;
                }else if(ans.size()>n){
                    break;
                }else{
                    ans=ans+characters[i];
                    ans=ans+characters[j];
                    j++;
                }
            }
 
        }
        i++;
        if(i==k){
            i=0;
        }
 
 
    }
    cout<<ans<<endl;
  
   
 
  
 
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