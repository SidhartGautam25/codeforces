#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mod 1000000007
 
 
 
 
void solve(){  
    ll n;
    cin>>n;
    vector<ll>arr1(n);
    ll even1=0;
    ll odd1=0;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
        if(arr1[i]%2==0){
            even1++;
        }else{
            odd1++;
        }
    }
    ll m;
    cin>>m;
    vector<ll>arr2(m);
    ll even2=0;
    ll odd2=0;
    for(int i=0;i<m;i++){
        cin>>arr2[i];
        if(arr2[i]%2==0){
            even2++;
        }else{
            odd2++;
        }
    }
    ll count=0;
    count=count+even1*even2;
    count=count+odd1*odd2;
    cout<<count<<endl;
    return;

   
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t=1;
   
 
    while(t>0){
    
        solve();
        cout<<endl;
        t=t-1;
     }
 
    return 0;
}