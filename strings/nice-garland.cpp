#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   map<int,map<char,int>>mp;

   mp[0]['R']=0;
   mp[0]['G']=0;
   mp[0]['B']=0;

   mp[1]['R']=0;
   mp[1]['G']=0;
   mp[1]['B']=0;

   mp[2]['R']=0;
   mp[2]['G']=0;
   mp[2]['B']=0;

   for(int i=0;i<n;i++){
    char c=s[i];
    mp[i%3][c]++;
   }

   // if RGB
   int rc1=mp[0]['G']+mp[0]['B']+mp[1]['R']+mp[1]['B']+mp[2]['R']+mp[2]['G'];
   
   //if RBG
   int rc2=mp[0]['G']+mp[0]['B']+mp[1]['R']+mp[1]['G']+mp[2]['R']+mp[2]['B'];

   //if GRB
   int rc3=mp[0]['R']+mp[0]['B']+mp[1]['B']+mp[1]['G']+mp[2]['R']+mp[2]['G'];

   //if GBR
   int rc4=mp[0]['R']+mp[0]['B']+mp[1]['R']+mp[1]['G']+mp[2]['G']+mp[2]['B'];

   //if BRG
   int rc5=mp[0]['G']+mp[0]['R']+mp[1]['B']+mp[1]['G']+mp[2]['R']+mp[2]['B'];

   //if BGR
   int rc6=mp[0]['G']+mp[0]['R']+mp[1]['R']+mp[1]['B']+mp[2]['G']+mp[2]['B'];

   int mmax=min(rc1,min(rc2,min(rc3,min(rc4,min(rc5,rc6)))));
   if(rc1==mmax){
      for(int i=0;i<n;i++){
        if(i%3==0){
            s[i]='R';
        }else if(i%3==1){
            s[i]='G';
        }else{
            s[i]='B';
        }
      }
   }else if(rc2==mmax){
    for(int i=0;i<n;i++){
        if(i%3==0){
            s[i]='R';
        }else if(i%3==1){
            s[i]='B';
        }else{
            s[i]='G';
        }
      }
   }else if(rc3==mmax){
    for(int i=0;i<n;i++){
        if(i%3==0){
            s[i]='G';
        }else if(i%3==1){
            s[i]='R';
        }else{
            s[i]='B';
        }
      }
   }else if(rc4==mmax){
    for(int i=0;i<n;i++){
        if(i%3==0){
            s[i]='G';
        }else if(i%3==1){
            s[i]='B';
        }else{
            s[i]='R';
        }
      }
   }else if(rc5==mmax){
    for(int i=0;i<n;i++){
        if(i%3==0){
            s[i]='B';
        }else if(i%3==1){
            s[i]='R';
        }else{
            s[i]='G';
        }
      }
   }else if(rc6==mmax){
    for(int i=0;i<n;i++){
        if(i%3==0){
            s[i]='B';
        }else if(i%3==1){
            s[i]='G';
        }else{
            s[i]='R';
        }
      }
   }
   cout<<mmax<<endl;
   cout<<s<<endl;


    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    //cin>>t;
    while(t--){
        solve();
     }

    return 0;
}