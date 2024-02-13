#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

ll ncr(int n,int r){
    ll prod=1;
      for(int i = 1; i <= r; i++){
            prod = prod * (n - r + i) / i;
        }
        return prod;
}

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    sort(arr.begin(),arr.end());
    ll count=0;
    int i=0;
    vector<bool>vis(n,false);
    while(i<n){
        
              if(mp[arr[i]]>=2){
            ll temp1=ncr(mp[arr[i]],2);
            //cout<<"temp1 "<<temp1<<endl;
            ll temp2=temp1*i;
            //cout<<"temp2 "<<temp2<<endl;
            count=count+temp2;
           }if(mp[arr[i]]>=3){
            ll temp1=ncr(mp[arr[i]],3);
            //cout<<"here temp1 "<<temp1<<endl;
            count=count+temp1;
        }
        int j=i;
        while(j<n and arr[j]==arr[i]){
            j++;
        }
        i=j;
            
        
      
       
    }
    cout<<count<<endl;
    
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