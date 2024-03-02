#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007



void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n,-1);
    if(k==0){
        for(int i=0;i<n;i++){
            cout<<"-1"<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(k>=(n-i)){
            arr[i]=1000;
            k=k-(n-i);
        }else if(k != 0){
            arr[i]=k;
            int j=1;
            while(j<k){
                arr[i+j]=-1;
                j++;
            }
            while(i+j<n){
                arr[i+j]=-2;
                j++;
            }
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
 

  

   
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
     }

    return 0;
}