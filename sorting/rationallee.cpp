#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007



void solve(){
    ll n,k;
    ll happ=0;

    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>v(k);
    for(int i=0;i<k;i++){
        cin>>v[i];
    }
    sort(arr.begin(),arr.end());
    sort(v.begin(),v.end());
    int i=n-1;
    int j=0;
    while(j<k){
        if(v[j]==1){
            happ=happ+2*arr[i];
            
        }else{
            int t=i-(k-j+v[j]-2);
            ll add=arr[i]+arr[t];
            happ=happ+add;
            
        }
        j++;
        i--;
    }
    cout<<happ<<endl;

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