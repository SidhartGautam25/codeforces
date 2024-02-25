#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n,k,m;
    cin>>n>>k>>m;
    string s;
    cin>>s;
    vector<char>arr(m);
    vector<vector<bool>>found(n,vector<bool>(k,false));
    int at=0;
    char present='a';
    bool good=false;
    int count=0;
    string ans="";
    for(int i=0;i<m;i++){
       // cout<<"at is "<<at<<endl;
       
        char curr=s[i];
        //cout<<"curr is "<<curr<<endl;
        int iofc=curr-'a';
       // cout<<"iofc is "<<iofc<<endl;
        if(curr>=('a'+k)){
            //cout<<"here"<<endl;
            continue;
        }else{
            if(found[at][curr-'a']){
               // cout<<"hhh"<<endl;
                continue;
            }else{
               // cout<<"at is "<<at<<" iofc is "<<iofc<<endl;
                found[at][curr-'a']=true;
               // cout<<"found[at][curr-'a'] "<<found[at][curr-'a']<<endl;
                count++;
                if(count==k){
                    at++;
                    count=0;
                    ans=ans+curr;
                }
            }
        }
         if(at==n){
            good=true;
            break;
        }
        

    }
    cout<<endl;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<k;j++){
    //         cout<<found[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    if(good){
        cout<<"YES"<<endl;
        return;
    }else{
     
        cout<<"NO"<<endl;
        for(int j=0;j<k;j++){
            if(found[at][j]==false){
                while(ans.size()<n){
                    char c='a'+j;
                    ans=ans+c;
                }
            }
        }
        cout<<ans<<endl;
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