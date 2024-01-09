#include <bits/stdc++.h>
using namespace std;

void solve(){
   long long n;
   cin>>n;
   int smallest;
   int largest;
   unordered_map<int,long long>mp;
   for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    mp[temp]++;
    if(i==0){
        smallest=temp;
        largest=temp;
    }else{
        smallest=min(smallest,temp);
        largest=max(largest,temp);
    }
   }
   if(largest==smallest){
    long long sol=(n*(n-1));
    cout<<sol<<endl;
    return;
   }
   long long ans=mp[smallest]*mp[largest]*2;
   cout<<ans<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}