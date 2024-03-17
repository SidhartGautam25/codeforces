
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX


void solve(){
     string s;
     cin>>s;;
     int n=s.size();
     int ans=0;
    // vector<vector<bool>>&dp(n+1,vector<bool>(n+1,false));
    for(int l=1;l<=n/2;l++){
        int count=0;
        for(int i=0;i<n-l;i++){
            if((s[i]==s[i+l]) || (s[i]=='?' || s[i+l]=='?')){
                count++;
                //cout<<"l "<<l<<" i "<<i<<" count "<<count<<endl;
                if(count==l){
                    ans=l*2;
                    break;
                }
            }else{
                count=0;

        }

        }
    }
     cout<<ans<<endl;
    
   
    
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