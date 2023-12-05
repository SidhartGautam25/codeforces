#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    string n;
    cin>>n;
    int s=n.size();
    string last;
    if(s>=2){
        last=n.substr(s-2,2);
    }else{
        last=n;
    }
    
    int num=stoi(last);
    if(num%4==0){
        cout<<"4"<<endl;
        return;
    }else{
        cout<<"0"<<endl;
        return;
    }
 
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