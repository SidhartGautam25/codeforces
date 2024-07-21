#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX



void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>arr(n);
    map<int,int>mp;
    mp[0]=0;
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        // string temp=s[i];
        arr[i]=s[i]-'0';
        // cout<<"i is "<<arr[i]<<"  ";
        mp[arr[i]]++;
    }
    if(n==2){
         int x=arr[0];
        int y=arr[1];
        int num=10*x+y;
        cout<<num<<endl;
        return;
        
        
    }
   
    for(int i=0;i<n-1;i++){
        int x=arr[i];
        int y=arr[i+1];
        int num=10*x+y;
        //  cout<<"num is "<<num<<"  ";
        int count=mp[0];
        if(arr[i]==0){
            count--;
        }
        if(arr[i+1]==0){
            count--;
        }
        if(count>0){
            cout<<"0"<<endl;
            return;
        }
        int val=0;
        int first=true;
       
        // cout<<"arr is "<<endl;
        // for(int k=0;k<n;k++){
        //     cout<<arr[k]<<"  ";
        // }
        // cout<<endl;
        for(int j=0;(j)<n;j++){
            if((j != i) && (j != (i+1))){
                // cout<<"for j "<<j<<" first is "<<first<<endl;
                if(arr[j]==1 && (!first)){
                    val=val*1;
                    first=false;
                }else{
                    val=val+arr[j];
                    first=false;
                    // cout<<"j "<<j<<" here arr j is "<<arr[j]<<endl;
                }
            }else if(j==i){
                if(val==1 || num==1){
                    val=num*val;
                    first=false;
                }else{
                    val=val+num;
                    first=false;
                }
            }
            // cout<<"val is "<<val<<"  ";
        }
        //  cout<<endl;
        ans=min(ans,val);
    }
    cout<<ans<<endl;
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