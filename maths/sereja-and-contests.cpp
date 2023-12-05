#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int x,k;
    cin>>x>>k;
    vector<int>arr(x+1,0);
    arr[x]=x;
    ll count=1;
    for(int i=0;i<k;i++){
        int type;
        cin>>type;
        if(type==1){
            int t,tt;
            cin>>t>>tt;
            arr[t]=t;
            arr[tt]=tt;
            count=count+2;

        }else{
            int t;
            cin>>t;
            arr[t]=t;
            count=count+1;
        }
    }
   // cout<<"we are here"<<endl;
    int mmax=x-count;
    int mmin=0;
    int i=1;
    while(i<arr.size()){
        if(arr[i]==0 and i+1<arr.size() and arr[i+1]==0){
            mmin++;
            i=i+2;
        }else if(arr[i]==0){
            mmin++;
            i++;
        }else{
            i++;
            continue;
        }
    }
    cout<<mmin<<" "<<mmax<<endl;
 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    // cin>>t;
    while(t--){
        solve();
     }

    return 0;
}