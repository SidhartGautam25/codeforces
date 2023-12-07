#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    unordered_set<int>ms;
    bool o=false;
    bool z=false;
    bool t=false;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ms.insert(arr[i]);
        if(arr[i]==0){
            z=true;
        }else if(arr[i]==1){
            o=true;
        }else if(arr[i]==2){
            t=true;
        }
    }
    if(z and o){
        cout<<"NO"<<endl;
        return;
    }
    if(o){
        if(t){
            cout<<"NO"<<endl;
            return;
        }else{
            for(int i=0;i<n;i++){
                if(ms.find(arr[i]-1) != ms.end()){
                    cout<<"NO"<<endl;
                    return;
                }
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
    int i=1;
    while(t--){
       
        solve();
        i++;
     }

    return 0;
}