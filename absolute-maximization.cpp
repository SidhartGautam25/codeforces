#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int aand;
    int aor;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i==0){
            aand=arr[i];
            aor=arr[i];
        }else{
            aand=aand & arr[i];
            aor=aor | arr[i];
        }
    }
    int ans=aor-aand;
    cout<<ans<<endl;
   
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}