#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
   
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>a(n);
        vector<int>b(m);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]=0;
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            mp[b[i]]++;
        }
       
       int i=0;
       int j=0;
       map<int,int>hash;
       int ans=0;
       int count=0;
       while(j<n){
           //cout<<"loop "<<endl;
        hash[a[j]]++;
        if(mp[a[j]]>0 && (hash[a[j]]<=mp[a[j]])){
            count++;
        }
        //cout<<"count "<<count<<" j-i+1 "<<(j-i+1)<<endl;
        //cout<<"a[j] "<<a[j]<<" hash aj "<<hash[a[j]]<<" mp aj "<<mp[a[j]]<<endl;
        while((j-i+1)>=m and count>=k){
            //cout<<"in loop"<<endl;
            //cout<<"countttt "<<count<<" j-i+1 "<<(j-i+1)<<endl;
            if(count>=k and (j-i+1)==m){
                ans++;
            }
            if(mp[a[i]]>0 && (hash[a[i]]<=mp[a[i]])){
                count--;
            }
            hash[a[i]]--;
            i++;
        }
        j++;
           
          
       }
    cout<<ans<<endl;
   
}
 

 
signed main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        solve();
        
    }
    return 0;
}