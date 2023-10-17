#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    string s;
    int negcount=0;
    cin>>s;
    unordered_map<int,int>mp;
    vector<int>neg;
    vector<int>pos;
    for(int i=0;i<n;i++){
        char c=s[i];
        if(c=='0'){
            negcount++;
            neg.push_back(arr[i]);
        }else{
            pos.push_back(arr[i]);
        }
        mp[arr[i]]=i;
    }
    sort(neg.begin(),neg.end());
    sort(pos.begin(),pos.end());
    
    int points=1;
    for(int j=0;j<neg.size();j++){
        int prank=neg[j];
        int index=mp[prank];
        arr[index]=points;
        points++;

    }
    for(int i=0;i<pos.size();i++){
        int prank=pos[i];
        int index=mp[prank];
        arr[index]=points;
        points++;
    }
    for(int i=0;i<n;i++){
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