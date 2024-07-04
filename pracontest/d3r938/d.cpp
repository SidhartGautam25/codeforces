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
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            mp[b[i]]++;
        }
        vector<int>count(n+1,0);
        map<int,int>last;
        for(int i=0;i<n;i++){
            if(mp.find(a[i]) != mp.end()){
                if((last.find(a[i]) == last.end()) || (last[a[i]]<=(i-k))){
                         count[i+1]=count[i]+1;
                }
                
                last[a[i]]=i;
            }else{
                count[i+1]=count[i];

            }

        }
        int ans=0;
       
        for(int i=m-1;i<n;i++){
            int diff=count[i+1]-count[i-m+1];
            if(diff>=k){
                ans++;
            }

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