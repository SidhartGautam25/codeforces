#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

bool customComparator(pair<int, int>& a,pair<int, int>& b) {
    if (a.first > b.first) {
        return true;
    } else if (a.first == b.first) {
        return a.second < b.second;
    }
    return false;
}


void solve(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>arr(n);
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        temp=temp%k;
        if(temp==0){
            temp=k;
        }
        arr[i].first=temp;
        arr[i].second=i;
    }
    sort(arr.begin(),arr.end(),customComparator);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i].second+1<<" ";
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