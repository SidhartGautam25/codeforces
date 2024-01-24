#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
bool comp(const pair<int,int>&a,const pair<int,int>&b){
    
    a.first<b.first;
}

void solve()
{
   ll n;
   cin>>n;
   vector<ll>x(n);
   vector<ll>y(n);
   vector<pair<ll,ll>>arr(n);
   for(ll i=0;i<n;i++){
    cin>>x[i]>>y[i];
    arr[i].first=x[i];
    arr[i].second=y[i];
   }
   sort(arr.begin(),arr.end());
//   for(int i=0;i<n;i++){
//       cout<<"arr[i]= "<<arr[i].first<<"  "<<arr[i].second<<endl;
//   }
   unordered_map<ll,ll>mpx;
   unordered_map<ll,ll>mpy;
   
   for(ll i=0;i<n;i++){
    mpx[x[i]]++;
   }
    for(ll i=0;i<n;i++){
    mpy[y[i]]++;
   }
  
   ll ans=0;
   for(auto it:mpx){
       //cout<<"element "<<it.first<<" frequency "<<it.second<<endl;
    ll t=it.second;
   // cout<<"t= "<<t<<endl;
    ans=ans+((t*(t-1))/2);
   }
  //cout<<"ans 1 "<<ans<<endl;
    for(auto it:mpy){
    ll t=it.second;
    //cout<<"q "<<t<<endl;
    ans=ans+((t*(t-1))/2);
   }
    //cout<<"ans 2 "<<ans<<endl;
   ll i=0;
   while(i<n){
       ll j=i+1;
       while(j<n && (arr[i].first==arr[j].first && arr[i].second==arr[j].second)){
           j++;
       }
       ll t=j-i;
      //cout<<"t= "<<t<<endl;
       ans=ans-(((t*(t-1))/2));
       i=j;
       
   }
  
   cout<<ans<<endl;
   

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}