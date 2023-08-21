#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   string s;
   cin>>s;
   n=s.size();
   unordered_map<char,int>mp;
   unordered_set<char>st;
   int count=0;
   for(int i=0;i<n;i++){
    char c=s[i];
    mp[c]++;
    if(mp[c]>=2){
        count++;
        st.insert(c);
    }
   }
   if(st.size()>=2){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}