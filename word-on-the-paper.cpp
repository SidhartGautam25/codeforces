#include <bits/stdc++.h>
using namespace std;

void solve(){
   vector<string>paper(8);
   int starti=-1;
   int startj=-1;
   for(int i=0;i<8;i++){
    
        string temp;
        cin>>temp;
        paper[i]=temp;
        for(int j=0;j<8;j++){
              if(starti==-1 and temp[j] != '.'){
            starti=i;
            startj=j;
               }
        }
        
    }
   
   string ans="";
   while(starti<8 and paper[starti][startj] != '.'){
    ans=ans+paper[starti][startj];
    starti++;
   }
   cout<<ans<<endl;

}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}