#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

bool comp(const ll a,const ll b){
    return a>b;
} 

bool comp1(const pair<ll,ll>a,const pair<ll,ll> b){
    return a.first<b.first;
} 



void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
       
    }
    int liars=0;
    for(liars=0;liars<=n;liars++){
        int count=0;
        for(int i=0;i<n;i++){
            if(liars<arr[i]){
                count++;
            }
        }
        if(count==liars){
            cout<<count<<endl;
            return;
        }
    }
    cout<<"-1"<<endl;
 

  
    
 
  

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