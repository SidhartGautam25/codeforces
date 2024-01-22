#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>arr(n);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        pair<int,int>p;
        p.first=a;
        p.second=b;
        arr[i]=p;
    }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(i != j){
                if((abs(arr[i].first-arr[j].first)+abs(arr[i].second-arr[j].second))<=k){
                    count++;
                }


            }
        }
        if(count==(n-1)){
            cout<<"1"<<endl;
            return;
        }
    }
    cout<<"-1"<<endl;
    return;
    



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