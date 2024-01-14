#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

bool comp(const pair<int,int>&a,const pair<int,int>&b){
    return a.first<b.first;
} 

void solve(){
   int n;
   cin>>n;
   vector<pair<int,int>>arr(n);
   for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    arr[i]=make_pair(a,b);
   }
   sort(arr.begin(),arr.end(),comp);
   set<int>ms;
   ll ans=0;
   for(int i=0;i<n;i++){
    //just to get number of end points greater than the current
    //current end point,we can find this easily using a loop,
    //but we are using set to reduce the time time complexity
    //from O(n) to O(log(n))
      int t=distance(ms.begin(),ms.lower_bound(arr[i].second));
      ans=ans+(ms.size()-t);
      ms.insert(arr[i].second);

   }
   cout<<ans<<endl;
   
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t>0){
    
        solve();
        t=t-1;
     }

    return 0;
}