#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n;
    cin>>n;
    vector<int>ans;
    unordered_set<int>ms;
    int i=1;
    while(i<=n){
        int j=i;
        while(j<=n){
            if(ms.find(j)==ms.end()){
                 ans.push_back(j);
                 ms.insert(j);
                 j=j*2;
            }else{
                break;
            }
           

        }
        i++;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";

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