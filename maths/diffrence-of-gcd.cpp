#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n,l,r;
    cin>>n>>l>>r;
    vector<int>ans;
    for(int i=1;i<=n;i++){
        int q=l/i;
        if(i*q==l or i*(q+1)<=r){
            if(i*q==l){
                ans.push_back(l);
            }else{
                int temp=i*(q+1);
                ans.push_back(temp);
            }
        }else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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