#include<bits/stdc++.h>
using namespace std;
int countset(int x){
    int count=0;
    while(x != 0){
        int rsb=x & -x;
        x=x-rsb;
        count++;
    }
    return count;
}

void solve(){
    int n;
    cin>>n;
    vector<int>nums;
    int count=countset(n);
    nums.push_back(n);
    while(count>1){
        int rsb=n & -n;
        nums.push_back(rsb);
        n=n-rsb;
        count--;
    }
    while(n>1){
        nums.push_back(n/2);
        n=n/2;
    }
    nums.push_back(1);
    cout<<nums.size()<<endl;
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}