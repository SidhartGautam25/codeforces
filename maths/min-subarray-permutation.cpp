#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n;
    cin>>n;
    unordered_map<int,int>idx;
    //vector<int>arr(n);
    for(int i=1;i<=n;i++){
        int temp;
        //arr[i]=temp;
        cin>>temp;
        idx[temp]=i;
    }
    int ind_1=idx[1];
    int ind_2=idx[2];
    int ind_n=idx[n];
   
        if(idx[n] < min(idx[1], idx[2])) {
            cout << idx[n] << ' ' << min(idx[1], idx[2]) << '\n';
        } else if(idx[n] > max(idx[1], idx[2])) {
            cout << idx[n] << ' ' << max(idx[1], idx[2]) << '\n';
        } else {
            cout << idx[1] << ' ' << idx[2] << '\n';
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