#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n,x;
    cin>>n>>x;
    unordered_set<int>ms;
    int temp_ans=INT_MAX;
    int mmax=INT_MIN;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        ms.insert(temp);
        mmax=max(mmax,temp);
        if(x%temp==0){
            temp_ans=min(temp_ans,x/temp);
        }
    }
    int count;
    if(x%mmax==0){
        //cout<<"yha "<<endl;
        count=x/mmax;
        cout<<count<<endl;
        return;
    }
    count=x/mmax;
    //cout<<"x "<<x<<" mmax "<<mmax<<endl;
    int rem=x-(mmax*count);
    if(ms.find(rem)==ms.end()){
        // cout<<"yha hai "<<endl;
        // cout<<"count "<<count<<endl;
        count=count+2;
        count=min(count,temp_ans);
        cout<<count<<endl;
        return;
    }
    //cout<<"final ";
    count=count+1;
    cout<<count<<endl;
    




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