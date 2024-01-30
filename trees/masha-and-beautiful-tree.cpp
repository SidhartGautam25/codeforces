#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int diff=1;
    bool possible=true;
   
    ll count=0;
    while(arr.size()>1){
       
         vector<int>temp;
        for(int i=0;i<arr.size();i=i+2){
            if(abs(arr[i]-arr[i+1])==diff){
                temp.push_back(min(arr[i],arr[i+1]));
                if(arr[i]>arr[i+1]){
                    count++;
                }
            }else{
                possible=false;
                // cout<<"right diff is "<<diff<<endl;
                // cout<<"diff is "<<abs(arr[i]-arr[i+1])<<endl;
                // cout<<"arr i is "<<arr[i]<<" and arr i+1 is "<<arr[i+1]<<endl;
                cout<<"-1"<<endl;
                return;
            }
        
        }
        arr=temp;
        diff=diff*2;
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
