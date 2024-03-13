#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void myfun(vector<ll>&power,ll n,char dir,ll&count,ll l,ll r){
    if(l==r){
        return;
    }
    ll mid=(l+r)/2;
    if(mid>=n){
        if(dir=='l'){
            count=count+1;
            myfun(power,n,'r',count,l,mid);
        }else{
            count=count+(r-l+1);
            myfun(power,n,'r',count,l,mid);
        }

    }else{
        if(dir=='r'){
            count=count+1;
            myfun(power,n,'l',count,mid+1,r);
        }else{
            count=count+(r-l+1);
            myfun(power,n,'l',count,mid+1,r);
        }

    }
}

void solve(){
    ll h,n;
    cin>>h>>n;
    ll count=0;
    vector<ll>power(h+1);
    power[0]=1;
    for(ll i=1;i<=h;i++){
        power[i]=2*power[i-1];
    }
    char dir='l';
    ll l=1;
    ll r=power[h];
    myfun(power,n,dir,count,l,r);
    cout<<count<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    //cin>>t;
    while(t--){
        solve();
     }

    return 0;
}