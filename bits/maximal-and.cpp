#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    unordered_map<int,int>mp;
    for(int i=0;i<=30;i++){
        int count=0;
        for(int j=0;j<n;j++){
            
            //cout<<"arr[j]= "<<arr[j]<<" 1<<i "<<(1<<i)<<" their and "<<
            if((arr[j]&(1<<i)) != 0){
                count++;
            }
        }
        mp[i]=count;
    }
    // for(int i=0;i<=29;i++){
    //     cout<<"i= "<<i<<" mp[i]= "<<mp[i]<<endl;
    // }
    ll ans=0;
    for(int i=30;i>=0;i--){
        if(mp[i]==n){
            ll temp=pow(2,i);
            ans=ans+temp;
           // cout<<"i= "<<i<<" mp[i]= "<<mp[i]<<endl;
        }
        else if(mp[i]+k>=n){
            //cout<<"k= "<<k<<endl;
            k=k-(n-mp[i]);
            ll temp=pow(2,i);
            ans=ans+temp;
             //cout<<"i= "<<i<<endl;
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