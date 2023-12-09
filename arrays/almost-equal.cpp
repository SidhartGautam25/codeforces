#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n;
    cin>>n;
     int m=2*n;
        vector<int>arr(m);
    if(n%2==0){
        cout<<"NO"<<endl;
        return;
    }else{
       
        arr[0]=1;
        int x=4;
        int i=1;
        while(i<n){
           arr[i]=x;
           i++;
           arr[i]=x+1;
           i++;
           x=x+4;
        }
        i=0;
        for(int j=n;j<m;j++){
            if(j%2==0){
                arr[j]=arr[i]-1;
            }else{
                arr[j]=arr[i]+1;
            }
            i++;
        }
    }
    cout<<"YES"<<endl;
    for(int j=0;j<arr.size();j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    //cin>>t;
    while(t--){
        solve();
     }

    return 0;
}