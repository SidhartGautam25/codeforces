#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        if(i==0){
            ans[i]=arr[i];
        }else{
            int d=arr[i];
            if(d==0 or (ans[i-1]-d)<0  ){
                ans[i]=ans[i-1]+d;
            }else{
                cout<<"-1"<<endl;
                return;
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