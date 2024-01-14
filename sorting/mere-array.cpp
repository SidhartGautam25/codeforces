#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    vector<int>sorted(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sorted[i]=arr[i];
    }
    sort(sorted.begin(),sorted.end());
    int smallest=sorted[0];
    for(int i=0;i<n;i++){
        if(arr[i]==sorted[i]){
            continue;
        }else{
            if(arr[i]%smallest==0){
                continue;
            }else{
                cout<<"NO"<<endl;
                return;
            }
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

    while(t>0){
    
        solve();
        t=t-1;
     }

    return 0;
}