#include <bits/stdc++.h>
using namespace std;

#define ll long long



void solve(){
   int n,x,y;
   cin>>n>>x>>y;
   if(y==n){
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    return;
   }else if(y>n){
    if(y-x<n){
        int last=y;
        int first=last-n+1;
        for(int i=first;i<=last;i++){
            cout<<i<<" ";
        }
        cout<<endl;
        return;

    }else{
        int diff=y-x;
        int d=diff;
        for(int i=2;i<diff;i++){
            if(diff%i==0){
                if(x+(n-1)*i>=y){
                    d=i;
                    break;

                }
               
            }
        }
        vector<int>arr;
        int tn=y;
        while(arr.size()<n and tn>0){
            arr.push_back(tn);
            tn=tn-d;
        }
        int s=arr.size();
        vector<int>vec;
        while(s<n){
            vec.push_back(y+d);
            y=y+d;
            s++;
        }
        for(int i=arr.size()-1;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        for(int i=0;i<vec.size();i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
        return;


    }

   }else{
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    return;
   }
 
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