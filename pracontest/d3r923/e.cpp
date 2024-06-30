
#include <bits/stdc++.h>
using namespace std;

#define ll long long


void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>ans(n);
    int s=1;
    int e=n;
    for(int i=0;i<k;i++){
        for(int j=i;j<n;j=j+k){
            if(i%2==0){
                ans[j]=s;
                s++;

            }else{
                ans[j]=e;
                e--;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<"  ";
    }
    cout<<endl;
 
   
   
    
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
