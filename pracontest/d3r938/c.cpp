#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
   
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    int j=n-1;
    while((i<j) && (i<n) && (j>=0) && (k>1)){
        if(arr[i]>arr[j]){
            int y=k/2;
            int temp=min(y,arr[j]);
            k=k-2*temp;
            arr[i]=arr[i]-temp;
            arr[j]=arr[j]-temp;
            if(arr[j]==0){
                j--;
            }
           

        }else if(arr[i]<arr[j]){
            int y=k/2;
            int temp=min(y,arr[i]);
            k=k-2*temp;
            arr[j]=arr[j]-temp;
            arr[i]=arr[i]-temp;
             if(arr[i]==0){
                i++;
            }

        }else{
            int y=k/2;
            int temp=min(y,arr[i]);
            k=k-2*temp;
            arr[i]=arr[i]-temp;
            arr[j]=arr[j]-temp;
            if(arr[i]==0){
                i++;
                j--;
            }

        }
        
    }
    //cout<<"here"<<endl;
    if(i>j){
        cout<<n<<endl;
        return;
    }

    if(k>0){
        if(k==1){
            if(arr[i]>1){
                int len=j-i+1;
                int killed=n-len;
                cout<<killed<<endl;
                return;

            }else{
                i++;
                int len=j-i+1;
                int killed=n-len;
                cout<<killed<<endl;
                return;
            }

        }else{
            if(i==j){
                if(arr[i]>k){
                    int killed=n-1;
                    cout<<killed<<endl;
                    return;

                }else{
                    cout<<n<<endl;
                    return;

                }
            }
            int len=j-i+1;
            int killed=n-len;
            cout<<killed<<endl;
            return;

        }

    }else{
       // cout<<"i "<<i<<" j "<<j<<endl;
        int len=j-i+1;
        int killed=n-len;
        cout<<killed<<endl;
        return;
        
    }
    

    
   //cout<<"done"<<endl;
}
 

 
signed main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        solve();
        
    }
    return 0;
}