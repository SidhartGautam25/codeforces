#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

bool compare(const pair<int,int>&a,const pair<int,int>&b){
    return a.second>b.second;
}

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<pair<int,int>>count;
    int counter=0;
    for(int i=0;i<n;i++){
           if(arr[i]%2==0){
            while(arr[i]%2==0 and arr[i]>0){
                arr[i]=arr[i]/2;
                counter++;
            }
           }
    }
    //cout<<"counter "<<counter<<endl;
    if(counter>=n){
        cout<<"0"<<endl;
    }else{
        for(int i=2;i<=n;i=i+2){
            int icount=0;
            int j=i;
           // cout<<"i= "<<i<<endl;
            while(j%2==0 and j>0){
                j=j/2;
                icount++;
            }
            pair<int,int>p;
            p.first=i;
            p.second=icount;
            //cout<<"p "<<p.first<<"  "<<p.second<<endl;
            count.push_back(p);
        }
        sort(count.begin(),count.end(),compare);
        // for(int i=0;i<count.size();i++){
        //     cout<<"count "<<count[i].first<<" "<<count[i].second<<endl;
        // }
        int i=0;
        int ans=0;
        while(counter<n and i<count.size() ){
               ans++;
               counter=counter+count[i].second;
               i++;
        }
        // cout<<"last counter "<<counter<<endl;
        if(counter>=n){
            cout<<ans<<endl;
        }else{
            cout<<"-1"<<endl;
        }

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