#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n;
    cin>>n;
    vector<int>a(n+1);
    vector<int>b(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }
    vector<int>diff(n+1);
    for(int i=1;i<=n;i++){
        diff[i]=a[i]-b[i];
    }
    int mmax=INT_MIN;
    for(int i=1;i<=n;i++){
        mmax=max(mmax,diff[i]);
    }
    vector<int>strong;
    for(int i=1;i<=n;i++){
         if(diff[i]==mmax){
            strong.push_back(i);
         }
    }
    int s=strong.size();
    cout<<s<<endl;
    for(int i=0;i<s;i++){
        cout<<strong[i]<<" ";
        if(i==(s-1)){
            cout<<endl;
        }
    }
    

 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        solve();
     }

    return 0;
}