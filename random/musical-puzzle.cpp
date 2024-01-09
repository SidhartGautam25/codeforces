#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   unordered_map<string,int>mp;
   int count=0;
   for(int i=0;i<n-1;i++){
    string temp=s.substr(i,2);
    if(mp.find(temp)==mp.end()){
        count++;
        mp[temp]++;
    }
   }
   cout<<count<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}