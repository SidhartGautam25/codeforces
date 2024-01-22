#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

bool isSorted(int a,int b,int c){
    if(a>=b and b>=c){
        return true;
    }else if(a<=b and b<=c){
        return true;
    }
    return false;
}


void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll count=0;
    count=count+n;
    count=count+(n-1);
    if(n<3){
        cout<<count<<endl;
        return;
    }
    for(int i=2;i<n;i++){
        if(((arr[i]>=arr[i-1]) and (arr[i-1]>=arr[i-2])) or ((arr[i]<=arr[i-1])and(arr[i-1]<=arr[i-2]))){
                continue;
        }else{
            if(i==2){
                count=count+1;
            }else{
                if(isSorted(arr[i-3],arr[i-1],arr[i])){
                    count=count+1;
                }else if(isSorted(arr[i-3],arr[i-2],arr[i])){
                    count=count+1;
                }else if(isSorted(arr[i-3],arr[i-2],arr[i-1])){
                    count=count+1;
                }else{
                    count=count+2;
                }
                
            }
            
        }
    }
    cout<<count<<endl;
    return;
   
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