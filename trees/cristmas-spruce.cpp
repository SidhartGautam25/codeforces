#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n;
    unordered_map<int,vector<int>>mp;
    int root;
    cin>>root;
    for(int i=1;i<n;i++){
        int parent;
        cin>>parent;
        mp[parent].push_back(i);
    }
    for(auto it:mp){
       int p=it.first;
       vector<int>child=it.second;
       if(child.size()==0){
          continue;
       }
       int count=0;
       for(int i=0;i<child.size();i++){
          int c=child[i];
          if(mp[c].size()==0){
            count++;
          }
       }
       if(count<3){
        cout<<"NO"<<endl;
        return;
       }
    }
    cout<<"YES"<<endl;
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