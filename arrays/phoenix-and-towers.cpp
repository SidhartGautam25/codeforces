#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mod LLONG_MAX
 
bool comp(pair<int,int>&a,pair<int,int>&b){
    if(a.first==a.first){
       return a.second<b.second;

    }
    return a.first<b.first;
}
 
void solve(){
    int n,m,x;
    cin>>n>>m>>x;
    vector<pair<int,int>>arr(n);
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr[i]=make_pair(a,i);
    }
    sort(arr.begin(),arr.end(),comp);
    vector<int>ans(n);
    int j=1;
    for(int i=0;i<n;i++){
        ans[arr[i].second]=j;
        j++;
        if(j==(m+1)){
            j=1;
        }

    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;


 
   
}
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t=1;
    
    //cin>>t;
    while(t--){
       // cout<<"t "<<t<<endl;
        solve();
     }
 
    return 0;
}