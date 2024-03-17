
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX


void solve(){
    int n,x;
    cin>>n>>x;
    string s;
    cin>>s;
    vector<int>bal(n+1,0);
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            bal[i+1]=bal[i]-1;
        }else{
            bal[i+1]=bal[i]+1;

        }
    }
    if(bal[n]==0){
        int ans=0;
        for(int i=0;i<=n;i++){
            if(bal[i]==x){
                ans++;
            }
        }
        if(ans==0){
            cout<<"0"<<endl;
            return;
        }else{
            cout<<"-1"<<endl;
            return;
        }

    }else{
        int ans=0;
        if(x==0){
            ans++;
        }
       
        for(int i=1;i<=n;i++){
            int temp=x-bal[i];
            if(temp%bal[n]==0){
                if((temp/bal[n])>=0){
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
        return;
    }


    
   
    
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