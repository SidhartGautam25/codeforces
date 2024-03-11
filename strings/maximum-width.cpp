#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mod LLONG_MAX

vector<int>myfun(string s,string t,int n,int m){
    vector<int>ans(m);
    int i=0;
    int j=0;
    while(i<n){
        if(s[i]==t[j]){
            ans[j]=i;
            j++;
        }
        i++;
    }

    return ans;
}
vector<int>fun(string s,string t,int n,int m){
    vector<int>ans(m);
    int i=n-1;
    int j=m-1;
    while(i>=0){
        if(s[i]==t[j]){
            ans[j]=i;
            j--;

        }
        i--;
    }
    return ans;
}
 
void solve(){
    int n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    vector<int>fv=myfun(s,t,n,m);
    vector<int>sv=fun(s,t,n,m);
    int ans=1;
    for(int i=1;i<m;i++){
        int temp;
        temp=sv[i]-fv[i-1];
        ans=max(ans,temp);
    }
    cout<<ans<<endl;

   
}
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t=1;
    
    //cin>>t;
    while(t--){
       // cout<<"t "<<t<<endl;
        solve();
     }
 
    return 0;
}