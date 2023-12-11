#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int count=0;
    unordered_map<int,int>mp;
    for(int i=0;i<n-1;i++){
        if(s[i]=='0'){
            if(k%2==1){
                s[i]='1';
            }else{
                if(count<k){
                    mp[i]++;
                    count++;
                    s[i]='1';

                }
               
            }
          

        }else{
            if(k%2==1){
                if(count<k){
                    count++;
                    mp[i]++;

                }else{
                    s[i]='0';
                }
            }
          

        }
    }
    int left=k-count;
    mp[n-1]=mp[n-1]+left;
    
       
        if((k-left)%2==1){
            if(s[n-1]=='1'){
                s[n-1]='0';
            }else{
                s[n-1]='1';
            }
        }
    
    cout<<s<<endl;
    for(int i=0;i<n;i++){
        cout<<mp[i]<<" ";
    }
    cout<<endl;
 
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