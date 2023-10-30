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
    unordered_map<int,int>mp;
    if(n==1){
        cout<<"YES"<<endl;
        return;
    }
    for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1]>3){
            cout<<"NO"<<endl;
            return;
        }else if(arr[i]-arr[i-1]==3){
            if(mp.find(3)==mp.end()){
                mp[3]=1;
            }else{
                cout<<"NO"<<endl;
                return;
            }
        }else if(arr[i]-arr[i-1]==2){
            if(mp[2]<2){
                mp[2]++;
            }else{
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    if(mp.find(2) != mp.end() and mp.find(3) != mp.end()){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
 
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