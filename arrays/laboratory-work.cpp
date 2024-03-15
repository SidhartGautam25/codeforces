#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

bool dfs(vector<vector<int>>&tree,vector<int>&col,int curr,int parent,int color,vector<int>&dp){
    if(col[curr] != color){
        return false;
    }
    if(dp[curr]==1){
        return true;
    }
    for(int i=0;i<tree[curr].size();i++){
        int child=tree[curr][i];
        if(child != parent){
            bool ans=dfs(tree,col,child,curr,color,dp);
            if(ans==false){
                return false;
            }
        }
    }
    if(col[curr]==col[parent]){
        dp[curr]=1;
    }
    return true;

}


void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    int mmin=INT_MAX;
    int mmax=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mmin=min(mmin,arr[i]);
        mmax=max(mmax,arr[i]);
    }
    if((mmax-mmin==0) or (mmax-mmin==1)){
        cout<<n<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }else{
        int mid=(mmin+mmax)/2;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int maxc=mp[mmax];
        int minc=mp[mmin];
        int midc=mp[mid];
        // cout<<"maxc "<<maxc<<" minc "<<minc<<endl;
        // cout<<"first case "<<2*min(maxc,minc)<<endl;
        // cout<<"second case "<<((mp[mid]/2)*2)<<endl;
        if((2*min(maxc,minc))>((mp[mid]/2)*2)){
            int ans=2*min(maxc,minc);
            int a=n-ans;
            int fmax=ans/2;
            int fmin=ans/2;
            cout<<a<<endl;
            for(int i=0;i<n;i++){
               if(arr[i]==mmax and fmax>0){
                   cout<<mid<<" ";
                   fmax--;
               }else if(arr[i]==mmin and fmin>0){
                   fmin--;
                   cout<<mid<<" ";
               }else{
                   cout<<arr[i]<<" ";
               }
            }
            cout<<endl;

        }else{
            int ans=(mp[mid]/2)*2;
            int a=n-ans;
            cout<<a<<endl;
            int fmax=ans/2;
            int fmin=ans/2;
            for(int i=0;i<n;i++){
                if(arr[i]==mid and (fmax>0 or fmin>0)){
                    if(fmax>0){
                        fmax--;
                        cout<<mmax<<" ";
                    }else{
                        fmin--;
                        cout<<mmin<<" ";
                    }

                }else{
                    cout<<arr[i]<<" ";
                }
            }
            cout<<endl;

        }

    }
   
  
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