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
    vector<int>arr(n);
    int mmin=INT_MAX;
    int mmax=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mmin=min(arr[i],mmin);
        mmax=max(arr[i],mmax);
    }
    
    
 
   
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