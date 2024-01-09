#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   
  
   string s;
   string copy;
   cin>>s;
   copy=s;
   n=s.size();
   char f=s[0];
   char l=s[n-1];
   int counta=0;
   int countb=0;
   int countc=0;
   unordered_map<char,int>mpc;
   unordered_map<char,char>mp;
   for(int i=0;i<n;i++){
      // cout<<"here "<<endl;
       
    char c=s[i];
    mpc[c]++;
    if(c=='A'){
        counta++;
    }else if(c=='B'){
        countb++;
    }else{
        countc++;
    }
    //mpc[c]++;
   }
   
   mp[f]='(';
   mp[l]=')';
   char m;
   if((f=='A' or f=='B') and (l=='A' or l=='B')){
     m='C';
   }else if((f=='A' or f=='C') and (l=='A' or l=='C')){
    m='B';
   }else{
    m='A';
   }
//   cout<<"--------------"<<endl;
//   for(auto it:mpc){
//       cout<<"-> it.first "<<it.first<<" it.second "<<it.second<<endl;
//   }
//   cout<<"------------------"<<endl;
   if(mpc[f]<mpc[l]){
     mp[m]='(';
   }else if(mpc[f]>mpc[l]){
    mp[m]=')';
   }else if(mpc[f]+mpc[l]==n){
       mp[m]=')';//no use
    
   }else{
       cout<<"NO"<<endl;
    return;
       
   }

   for(int i=0;i<n;i++){
    char temp=s[i];
    s[i]=mp[temp];
   }
//   cout<<"initial "<<copy<<endl;
//   cout<<"final "<<s<<endl;
   stack<char>stk;
   for(int i=0;i<n;i++){
    char t=s[i];
    if(stk.size()==0){
        if(t=='('){
            stk.push(t);
        }else{
            cout<<"NO"<<endl;
            return;
        }
    }else{
        if(t=='('){
            if(stk.top()=='('){
                stk.push(t);
            }else{
                stk.pop();
            }
        }else if(t==')'){
            if(stk.top()=='('){
                stk.pop();
            }else{
                cout<<"NO"<<endl;
                return;
            }
        }
    }
   }
   if(stk.size()>0){
    cout<<"NO"<<endl;
    return;
   }
   cout<<"YES"<<endl;








}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}