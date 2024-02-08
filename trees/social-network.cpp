#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007



void solve()
{
   int n,d;
   cin>>n>>d;
   vector<int>arr(n+1);
   for(int i=1;i<=n;i++){
     arr[i]=i;
   }
   vector<int>ans;
   vector<pair<int,int>>dp(d);
   for(int i=0;i<d;i++){
      int a,b;
      cin>>a>>b;
      dp[i].first=a;
      dp[i].second=b;
   }
   unordered_map<int,int>mp;
   for(int i=0;i<d;i++){
     int x=dp[i].first;
     int y=dp[i].second;
     if(arr[x] != arr[y]){
        int a=arr[x];
        int b=arr[y];
        int mmin=min(a,b);
        int count=0;
        for(int i=1;i<=n;i++){
            if(arr[i]==a or arr[i]==b){
                count++;
                arr[i]=mmin;
            }
        }
        mp[mmin]=count;
        ans.push_back(count);
     }else{
        ans.push_back(mp[arr[x]]);
     }
   }
   int mmax=ans[0];
   for(int i=0;i<ans.size();i++){
       int curr=max(mmax,ans[i]);
       mmax=max(curr,mmax);
       curr=curr-1;
       cout<<curr<<endl;
   }
   
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}
