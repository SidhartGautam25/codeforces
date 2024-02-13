#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod  998244353

            
 



ll ncr(ll n,ll r){
    ll prod=1;
      for(ll i = 1; i <= r; i++){
            prod = prod * (n - r + i) / i;
        }
        return prod;
}

ll power(ll x, ll y)
{
    ll temp;
    if (y == 0){
        ll ans=1;
        return ans;

    }
       
    temp = power(x, y / 2);
    if (y % 2 == 0)
        return ((temp%mod) * (temp%mod))%mod;
    else{
        ll p1=((x%mod)*(temp%mod))%mod;
        ll p2=((p1%mod)*(temp%mod))%mod;
        return p2;
    }
        
}



void solve(){
    int n;
    cin>>n;
    vector<int>xp(n);
    for(int i=0;i<n;i++){
        cin>>xp[i];
    }
    vector<int>xpc(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>xpc[i];
        mp[xp[i]]=xpc[i];
    }
    int m;
    cin>>m;
    vector<int>yp(m);
    for(int i=0;i<m;i++){
        cin>>yp[i];
    }
    vector<int>ypc(m);
    map<int,int>mpy;
    for(int i=0;i<m;i++){
        cin>>ypc[i];
        if(mp.find(yp[i])==mp.end()){
            cout<<"0"<<endl;
            return;
        }else{
            if(mp[yp[i]]<ypc[i]){
                cout<<"0"<<endl;
                return;
            }else{
                mp[yp[i]]=mp[yp[i]]-ypc[i];
            }
        }
    }
    ll ans=0;
    int count=0;
    for(auto it:mp){
        if(it.second>0){
            count++;
        }
    }
    // if(count==0){
    //     cout<<"1"<<endl;
    //     return;
    // }
   
    ans=power(2,count)%mod;
    cout<<ans<<endl;
    
    
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