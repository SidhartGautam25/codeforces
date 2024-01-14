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
    ll n;
    cin>>n;
    vector<pair<ll,int>>arr;
    vector<ll>l(n);
    vector<ll>r(n);
    vector<ll>c(n);
    for(int i=0;i<n;i++){
        ll temp;
        
        cin>>temp;
        arr.push_back(make_pair(temp,0));
    }
    for(int i=0;i<n;i++){
        ll temp;
        cin>>temp;
        arr.push_back(make_pair(temp,1));
    }
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    sort(arr.begin(),arr.end(),comp1);
    stack<pair<ll,int>>stk;
    vector<ll>lengths;
    for(int i=0;i<arr.size();i++){
        if(arr[i].second==0){
            stk.push(arr[i]);
        }else{
            pair<ll,int>top=stk.top();
            stk.pop();
            ll len=arr[i].first-top.first;
            lengths.push_back(len);
        }
    }
    sort(lengths.begin(),lengths.end());
    sort(c.begin(),c.end(),comp);
    ll total=0;
    for(int i=0;i<n;i++){
        total=total+(c[i]*(lengths[i]));
    }
    cout<<total<<endl;
 
  

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