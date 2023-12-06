#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

bool compare(const pair<int,int> &a,const pair<int,int> &b){
    return a.second<b.second;
}
void solve(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].first;
    }
    for(int i=0;i<n;i++){
        cin>>arr[i].second;
    }
    sort(arr.begin(),arr.end(),compare);
    int attack=0;
    for(int i=0;i<n;i++){
        if(arr[i].first<=attack){
            continue;
        }
        arr[i].first=arr[i].first-attack;
        while(arr[i].first>0 and k>0){
            if(k<=0){
                cout<<"NO"<<endl;
                return;
            }
            arr[i].first=arr[i].first-k;
            attack=attack+k;
            k=k-arr[i].second;
            
        }

    }
    cout<<"YES"<<endl;

 
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


