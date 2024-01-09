#include <bits/stdc++.h>
using namespace std;

void solve(){
 int n;
 cin>>n;
 vector<int>arr(n);
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }
 sort(arr.begin(),arr.end());
 long long sum=0;
 int i=0;
 int j=n-1;
 while(i<j){
    sum=sum+(arr[j]-arr[i]);
    i++;
    j--;
 }
 cout<<sum<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}