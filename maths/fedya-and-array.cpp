#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int x,y;
    cin>>x>>y;
    vector<int>arr;
    int temp_x=x;
    int temp_y=y;
    while(true){
        arr.push_back(temp_y);
        if(temp_y==x){
            break;
        }
        temp_y++;
    }
    temp_y--;
    while(true){
        if(temp_y==y){
            break;
        }
        arr.push_back(temp_y);
        temp_y--;
    }
    cout<<arr.size()<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
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