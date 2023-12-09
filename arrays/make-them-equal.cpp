#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    if(mp.size()>3){
        cout<<"-1"<<endl;
        return;
    }else if(mp.size()==1){
        cout<<"0"<<endl;
        return;
    }else if(mp.size()==2){
        vector<int>arr;
        for(auto it:mp){
            arr.push_back(it.first);
        }
        int a=arr[0];
        int b=arr[1];
        int d=abs(a-b);
        if(d%2==0){
            d=d/2;
            cout<<d<<endl;
            return;
        }else{
            cout<<d<<endl;
            return;
        }
    }else{
         vector<int>arr;
        for(auto it:mp){
            arr.push_back(it.first);
        }
        sort(arr.begin(),arr.end());
        int a=arr[2];
        int c=arr[1];
        int b=arr[0];
        int d=c-b;
        if((a-d)==c){
            cout<<d<<endl;
            return;
        }else{
            cout<<"-1"<<endl;
            return;
        }

    }
    cout<<"-1"<<endl;

 
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