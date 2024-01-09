#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  int count=0;
  long long sum=0;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
      int temp;
      cin>>temp;
      arr[i]=temp;
      sum=sum+abs(temp);
  }
  int i=0;
  while(i<n){
    if(arr[i]>=0){
        i++;
    }else{
        count++;
        int j=i;
        while(j<n and arr[j]<=0){
            j++;
        }
        i=j;
    }
  }
  cout<<sum<<" "<<count<<endl;

}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}