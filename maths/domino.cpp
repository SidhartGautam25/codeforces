#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>>arr(n);
    bool found=false;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(a%2==0 and b%2==1){
            found=true;
        }
        if(a%2==1 and b%2==0){
            found=true;
        }
        arr[i].first=a;
        arr[i].second=b;

    }
    ll top=0;
    ll bottom=0;
    for(int i=0;i<n;i++){
        top=top+arr[i].first;
        bottom=bottom+arr[i].second;
    }
    if(top%2==0 and bottom%2==0){
        cout<<"0"<<endl;
        return;
    }
    else if(top%2==1 and bottom%2==1){
        if(found){
            cout<<"1"<<endl;
            return;
        }else{
            cout<<"-1"<<endl;
            return;
        }

    }else{
        cout<<"-1"<<endl;
        return;
    }
    cout<<"-1"<<endl;
 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    // cin>>t;
    while(t--){
        solve();
     }

    return 0;
}