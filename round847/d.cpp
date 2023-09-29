#include <bits/stdc++.h>
using namespace std;

void solve(){
  long long n;
  cin>>n;
  vector<int>arr(n);
  ordered_map<int,int>mp;
  for(int i=0;i<n;i++){
    cin>>arr[i];
    mp[arr[i]]++;
  }
  cout<<"edited"<<endl;




}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}