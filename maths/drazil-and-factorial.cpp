#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,string>mp;
    mp['0']="0";
    mp['1']="0";
    mp['2']="2";
    mp['3']="3";
    mp['4']="322";
    mp['5']="5";
    mp['6']="53";
    mp['7']="7";
    mp['8']="7222";
    mp['9']="7332";
   
    vector<int>arr;
    for(int i=0;i<n;i++){
        char c=s[i];
        string temp=mp[c];
        //cout<<"temp "<<temp<<endl;
        int t=stoi(temp);
        while(t>0){
            arr.push_back(t%10);
            t=t/10;
        }
    }
    sort(arr.begin(),arr.end());
     string ans="";
     n=arr.size();
     for(int i=n-1;i>=0;i--){
         cout<<arr[i];
     }
     cout<<endl;
   // cout<<ans<<endl;

   
 
 
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