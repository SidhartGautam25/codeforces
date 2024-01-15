#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

bool comp(const pair<ll,ll>a,const pair<ll,ll>b){
    return a.first>b.first;
} 




void solve(){
    ll n,s1,s2;
    cin>>n>>s1>>s2;
    vector<pair<ll,ll>>arr(n);
    for(ll i=0;i<n;i++){
        ll temp;
        cin>>temp;
        arr[i]=make_pair(temp,i+1);
    }
    sort(arr.begin(),arr.end(),comp);
    ll a_time=0;
    ll b_time=0;
    vector<ll>a;
    vector<ll>b;
    for(int i=0;i<n;i++){
        if((a_time+s1)==(b_time+s2)){
            if(s1<s2){
                a.push_back(arr[i].second);
                a_time=a_time+s1;
            }else{
                b.push_back(arr[i].second);
                b_time=b_time+s2;
            }

        }else if((a_time+s1)<(b_time+s2)){
            a.push_back(arr[i].second);
            a_time=a_time+s1;

        }else{
            b.push_back(arr[i].second);
            b_time=b_time+s2;

        }
    }

    cout<<a.size()<<" ";
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<b.size()<<" ";
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
 

  
    
 
  

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