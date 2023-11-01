#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n;
    cin>>n;
    vector<int>ans(n,0);
    if(n==1){
        cout<<"1"<<endl;
        return;

    }else if(n==2){
        cout<<"1 2"<<endl;
        return;

    }else{
        ans[0]=3;
        ans[n-1]=2;
        ans[n/2]=1;
        int val=4;
        for(int i=1;i<n-1;i++){
              if(ans[i]==0){
                ans[i]=val;
                val++;
              }
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
 
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