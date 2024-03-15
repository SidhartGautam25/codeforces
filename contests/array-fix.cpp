#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // vector<int>temp;
    // map<int,int>mp;
    // for(int i=0;i<n;i++){
    //     int num=arr[i];
     
    //         if(num<10){
    //             temp.push_back(num);
                
    //         }else{
    //             int tt=num;
    //             temp.push_back(tt/10);
    //             temp.push_back(tt%10);
                
    //         }
        
    //     mp[i]=temp.size();
    // }
    // cout<<"temp "<<endl;
    // for(int i=0;i<temp.size();i++){
    //     cout<<temp[i]<<" ";
    // }
    //cout<<endl;
    // vector<bool>isorted(temp.size()+1);
    // isorted[0]=true;
    // isorted[1]=true;
    // for(int i=1;i<temp.size();i++){
    //     bool res=true;
    //     if(temp[i]<temp[i-1]){
    //         res=false;
    //     }
    //     isorted[i+1]=isorted[i] && res;

    // }
    // if(isorted[isorted.size()-1]){
    //     cout<<"YES"<<endl;
    //     return;
    // }
    // cout<<"---"<<endl;
    // for(int i=0;i<isorted.size();i++){
    //     cout<<isorted[i]<<" ";
    // }
    //cout<<endl;
    // vector<bool>sorted(n+1);
    // sorted[0]=true;
    // sorted[1]=true;
    for(int i=n-1;i>=1;i--){
        if(arr[i]>=arr[i-1]){
           
            continue;
        }else{
            vector<int>y;
            for(int k=0;k<i;k++){
                int z=arr[k];
                if(z<10){
                    y.push_back(z);
                }else{
                    y.push_back(z/10);
                    y.push_back(z%10);
                }
                
            }
            //cout<<"ind for i"<<i<<ind<<endl;
            for(int j=1;j<y.size();j++){
                if(y[j]>=y[j-1]){
                    continue;
                }else{
                    cout<<"NO"<<endl;
                    return;
                }
            }
            if(y[y.size()-1]>arr[i]){
                cout<<"NO"<<endl;
                return;
                
            }
            break;
        }
    }
    //cout<<"last "<<endl;
    // for(int i=0;i<sorted.size();i++){
    //     cout<<sorted[i]<<" ";
    // }
    //cout<<endl;
    cout<<"YES"<<endl;

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