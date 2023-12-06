#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    unordered_map<int,int>mp;
    int q=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[]]
        if(arr[i]==1){
            q=-1;
        }
    }
    if(q==-1){

    }else{
        sort(arr.begin(),arr.end());
        if(arr[0]==arr[arr.size()-1]){

        }else{
            for(int i=n-1;i>0;i--){
                if(arr[i]==2){
                    continue;
                }else{
                    while(arr[i] != 2){
                        cout<<i<<"  "<<i-1<<endl;
                        double a=arr[i];
                        double b=arr[i-1];
                        int c=ceil(a/b);
                        arr[i]=c;
                    }
                }
            }
            if(arr[0] != 2){
                while(arr[0] != 2){
                    cout<<0<<" "<<1<<endl;
                    double a=arr[0];
                    double b=arr[1];
                    double c=ceil(a/b);
                    arr[0]=c;
                }
            }
        }
    }

 
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