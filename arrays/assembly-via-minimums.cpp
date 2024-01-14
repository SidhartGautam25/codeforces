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
  int m=(n*(n-1))/2;
  vector<int>arr(m);
  for(int i=0;i<m;i++){
    cin>>arr[i];
  }
  vector<int>ans;
  sort(arr.begin(),arr.end());
  int i=0;
  int next=n-1;
  while(i<m){
    ans.push_back(arr[i]);
    i=i+next;
    next--;
  }
  ans.push_back(pow(10,9));
  for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
  }
  cout<<endl;
   
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