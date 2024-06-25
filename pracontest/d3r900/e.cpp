#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX

// for geometry
// https://victorlecomte.com/cp-geo.pdf


void buildPrefix(vector<int>&arr,int  n,vector<vector<int>>&pref){

    for(int i=0;i<n;i++){
        for(int j=0;j<32;j++){
            if(arr[i]&(1<<j)){
                pref[i+1][j]=pref[i][j]+1;
            }else{
                pref[i+1][j]=pref[i][j];
            }
        }
    }

}




void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>>pref(n+1,vector<int>(32,0));
    buildPrefix(arr,n,pref);
    int q;
    cin>>q;
    for(int z=0;z<q;z++){
        int l,k;
        cin>>l>>k;
        l--;
        int ans=l;
        if(arr[l]<k){
            cout<<"-1"<<"  ";
           continue;
        }else{
            int low=l;
            int high=n-1;
            
            
            while(low<=high){
                int mid=(low+high)/2;
                int num=0;
                for(int j=0;j<32;j++){
                    if(pref[mid+1][j]-pref[l][j]==(mid-l+1)){
                        num=num+(1<<j);
                    }
                }
                if(num>=k){
                    low=mid+1;
                    ans=max(ans,mid);
                }else{
                    high=mid-1;
                }
            }
        }

        cout<<ans+1<<" ";

    }
    cout<<endl;
   
    
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