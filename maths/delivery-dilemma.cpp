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
    vector<int>a(n);
    vector<int>b(n);
    vector<pair<int,int>>vp;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        vp.push_back(make_pair(a[i],b[i]));
    }
    ll time=0;
    sort(vp.begin(),vp.end(),comp);
   
    for(int i=n-1;i>=0;i--){
        if(time+vp[i].second<vp[i].first){
            time=time+vp[i].second;
        }else{
            time=vp[i].first;
            break;
        }
    }
    
    cout<<time<<endl;
  
 
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