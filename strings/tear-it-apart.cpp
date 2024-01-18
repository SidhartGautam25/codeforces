#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007




void solve(){
    string str;
    cin>>str;
    ll n=str.size();
    unordered_map<char,vector<ll>>mp;
    for(ll i=0;i<n;i++){
        char c=str[i];
        mp[c].push_back(i);
    }
    ll ans=LLONG_MAX;
    for(auto it:mp){
        char curr=it.first;
        ll temp=0;
        vector<ll>arr=it.second;
        if(arr.size()==1){
            ll first=arr[0];
            ll count1=0;
            while(first>0){
                first=first/2;
                count1++;
            }
            ll second=n-arr[0]-1;
            ll count2=0;
            while(second>0){
                second=second/2;
                count2++;
            }
            temp=count1+count2;
            ans=min(ans,temp);
            continue;
        }
        for(ll i=0;i<arr.size();i++){
            ll step=0;
            if(i==0){
                ll first=arr[0];
                
                while(first>0){
                    first=first/2;
                    step++;
                }
            }else if(i==(arr.size()-1)){
                ll last=n-arr[i]-1;
                while(last>0){
                    last=last/2;
                    step++;
                }
                ll mid=arr[i]-arr[i-1]-1;
                while(mid>0){
                    mid=mid/2;
                    step++;
                }
            }else{
                ll mid=arr[i]-arr[i-1]-1;
                while(mid>0){
                    mid=mid/2;
                    step++;
                }
            }
            temp=max(temp,step);
            
        }
        ans=min(ans,temp);
    }
    cout<<ans<<endl;
   
 
   
    
 
  

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t>0){
    
        solve();
        t=t-1;
     }

    return 0;
}