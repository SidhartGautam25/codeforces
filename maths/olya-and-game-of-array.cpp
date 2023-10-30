#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll n;
    cin>>n;
    vector<vector<int>>arr(n);
    vector<pair<int,int>>data(n);
    for(int i=0;i<n;i++){
        ll m;
        cin>>m;
        int fmin=-1;
        int smin=INT_MAX;
        for(int i=0;i<m;i++){
            int temp;
            cin>>temp;
            if(i==0){
                fmin=temp;   
            }else{
                 if(temp<fmin){
                    smin=fmin;
                    fmin=temp;

                 }else if(smin>temp){
                    smin=temp;
                 }
            }
        }
        data[i].first=fmin;
        data[i].second=smin;
    }
    int ind=0;
    int minind=data[0].second;
    int ffmin=data[0].first;
    for(int i=1;i<n;i++){
        if(minind>data[i].second){
             ind=i;
             minind=data[i].second;
        }
        ffmin=min(ffmin,data[i].first);
    }
    ll sum=0;
    for(int i=0;i<n;i++){
        if(i != ind){
            sum=sum+data[i].second;
        }
    }
    sum=sum+ffmin;
    cout<<sum<<endl;

 
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