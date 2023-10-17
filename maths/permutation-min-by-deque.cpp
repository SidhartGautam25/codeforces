#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr[i]=temp;
    }
    deque<int>dq;
    for(int i=0;i<n;i++){
         if(i==0){
            dq.push_back(arr[i]);
         }else{
            if(arr[i]<dq.front()){
                dq.push_front(arr[i]);
            }else{
                dq.push_back(arr[i]);
            }
         }
    }
    while(dq.size()>0){
        int temp=dq.front();
        dq.pop_front();
        cout<<temp<<" ";
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