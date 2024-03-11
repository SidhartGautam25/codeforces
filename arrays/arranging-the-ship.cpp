#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mod LLONG_MAX
 
 int myfun(string s,int n){
     int ind=-1;
   int count =0;
   int move=0;
   for(int i=0;i<n;i++){
      char c=s[i];
      if(c=='*'){
        if(count==0){
            count=1;
            ind=i;
        }else{
            move=move+(i-(ind+count));
            count++;
        }
      }
   }
   return move;

 }

 int  middle(string s,int n){
    int sheep=0;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        if(s[i]=='*'){
            sheep++;
            mp[sheep]=i;
        }
    }
    int mid=sheep/2;
    int move=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='*'){
            count++;
            if(count<=mid){
                move=move+(mp[mid]-)

            }else{

            }
        }
    }
 }
 
void solve(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   int ind=-1;
   int count =0;
   int move1=0;
   move1=myfun(s,n);
   reverse(s.begin(),s.end());
   move2=myfun(s,n);
   int ans=max(move1,move2);
   cout<<ans<<endl;
    
  

 
   
}
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    
    cin>>t;
    while(t--){
       // cout<<"t "<<t<<endl;
        solve();
     }
 
    return 0;
}