#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>>arr(n);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        arr[i].first=a;
        arr[i].second=b;
    }
    bool possible=true;
    int p=arr[0].first;
    int c=arr[0].second;
    if(p<c){
        possible=false;
    }
    for(int i=1;i<n;i++){
        if(possible==false){
            break;
        }
        int pc=arr[i].first;
        int cc=arr[i].second;
        if(pc<p or cc<c or ((pc-cc)<(p-c))){
            possible=false;
            break;
        }else{
            p=pc;
            c=cc;
        }
    }
    if(possible){
        cout<<"YES"<<endl;
        return;
    }else{
        cout<<"NO"<<endl;

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