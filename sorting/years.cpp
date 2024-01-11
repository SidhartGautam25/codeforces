#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

bool comp(const pair<int,int>&a,const pair<int,int>&b){
    if(a.second==b.second){
        return a.first<b.first;
    }
    return a.second<b.second;
}

void solve(){
    ll n;
    cin>>n;
    ll size=100002;
    vector<ll>arr(size,0);
    for(ll i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        arr[a]++;
        arr[b]--;
       
    }
    ll count=0;
    ll ans=0;
    ll year;
    for(ll i=1;i<size;i++){
        count=count+arr[i];
        if(ans<count){
            ans=count;
            year=i;
        }
    }
    cout<<year<<" "<<ans<<endl;
   
  
 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    //cin>>t;

    while(t>0){
    
        solve();
        t=t-1;
     }

    return 0;
}