#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX



void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int minInd=0;
    int mmin=arr[0];
    for(int i=1;i<n;i++){
        if(mmin>arr[i]){
            mmin=arr[i];
            minInd=i;
        }
    }
    for(int i=minInd+1;i<n;i++){
        if(arr[i]>=arr[i-1]){
            continue;
        }else{
            cout<<"-1"<<endl;
            return;
        }
    }
    cout<<minInd<<endl;
    
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