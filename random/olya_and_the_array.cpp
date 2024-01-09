#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<vector<int>>arr(n);
    vector<pair<int,int>>ans;
    long long sum=0;
    int first,second;
    for(int i=0;i<n;i++){
        first=INT_MAX;
        second=INT_MAX;
        int size;
        cin>>size;
        for(int j=0;j<size;j++){
             int temp;
             cin>>temp;
             arr[i].push_back(temp);
             if(temp<first){
                 second=first;
                 first=temp;
             }else if(temp<second){
                 second=temp;
             }
            
        }
       ans.push_back({first,second});
    }
    
    sort(ans.begin(), ans.end(), [](auto &a, auto &b) {
          return a.second < b.second;
    });
    int smallest=INT_MAX;
    for(int i=1;i<n;i++){
        sum=sum+ans[i].second;
        smallest=min(smallest,ans[i].first);
    }
    sum=sum+min(smallest,ans[0].first);
    cout<<sum<<endl;
    
}


int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}