#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007



void solve()
{
   int n;
   cin>>n;
   vector<int>arr(n);
   int count=0;
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
  int i=1;
  int prev=1;
  while(i<n){
    count++;
    int j=0;
    int nodes=0;
    while(j<prev and i<n){
        j++;
        bool first=true;
        while(i<n and ((arr[i]>arr[i-1]) or (first))){
            first=false;
            nodes++;
            i++;
        }
    }
    prev=nodes;

  }
  cout<<count<<endl;


 

   

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
