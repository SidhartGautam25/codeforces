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
    vector<int>odd;
    vector<int>even;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even.push_back(arr[i]);
        }else{
            odd.push_back(arr[i]);
        }
    }
    for(int i=1;i<even.size();i++){
          if(even[i]>=even[i-1]){
            continue;
          }else{
            cout<<"NO"<<endl;
            return;
          }
    }
     for(int i=1;i<odd.size();i++){
          if(odd[i]>=odd[i-1]){
            continue;
          }else{
            cout<<"NO"<<endl;
            return;
          }
    }
    cout<<"YES"<<endl;
    return;
 
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