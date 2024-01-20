#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mod 1000000007
 
 
 
 
void solve(){   
    int n;
    cin>>n;
    string s;
    cin>>s;
    int left=0;
    int right=0;
    int diff=0;
    unordered_set<char>ms;
    for(int i=0;i<n;i++){
        ms.insert(s[i]);
    }   
    diff=ms.size();
    unordered_set<char>sett;
    sett.insert(s[left]);
    diff=1;
    int ans=INT_MAX;
    while(right<n){
        sett.insert(s[right]);
        if(s[right]==s[left]){
            left++
        }
        if(sett.size()==ms.size()){
            ans=min(ans,right-left);
        }
        right++;
    }
    cout<<ans<<endl;
 
   
 
  
 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t=1;
    //cin>>t;
 
    while(t>0){
    
        solve();
        cout<<endl;
        t=t-1;
     }
 
    return 0;
}