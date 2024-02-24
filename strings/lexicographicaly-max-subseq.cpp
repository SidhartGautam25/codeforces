#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod  1000000007

bool comp(pair<char,int>&a,pair<char,int>&b){
    if(a.first==b.first){
        return a.second<b.second;
    }
    return a.first>b.first;
}
void solve(){
    string s;
    cin>>s;
    int n=s.size();
    vector<pair<char,int>>arr(n);
    for(int i=0;i<n;i++){
        char c=s[i];
        arr[i].first=c;
        arr[i].second=i;
    }
    sort(arr.begin(),arr.end(),comp);
    string ans="";
    int last=-1;
    for(int i=0;i<n;i++){
        if(arr[i].second>last){
            last=i;
            ans=ans+arr[i].first;
        }
    }
    cout<<ans<<endl;
 
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