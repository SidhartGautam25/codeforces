#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX



void solve(){
    int n;
    cin>>n;
    vector<int>spend(n);
    vector<int>has(n);
    for(int i=0;i<n;i++){
        cin>>spend[i];
    }
    for(int i=0;i<n;i++){
        cin>>has[i];
    }
    vector<int>pos;
    vector<int>neg;
    for(int i=0;i<n;i++){
        if(has[i]-spend[i]>=0){
            pos.push_back(has[i]-spend[i]);
        }else{
            neg.push_back(has[i]-spend[i]);
        }
    }
   sort(pos.begin(),pos.end());
   sort(neg.begin(),neg.end());
   reverse(neg.begin(),neg.end());
//   cout<<"-------------------"<<endl;
//   for(int t=0;t<pos.size();t++){
//       cout<<pos[t]<<"  ";
//   }
//   cout<<endl;
//   cout<<"neg is "<<endl;
//   for(int t=0;t<neg.size();t++){
//       cout<<neg[t]<<"  ";
//   }
//   cout<<endl;
   int i=0;
   int j=0;
    // cout<<"count is "<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<count[i]<<" ";
    // }
    // cout<<endl;
    // vector<bool>marked(n,false);
    // int ans=0;
    // int i=0;
    // int j=0;
    // while(j<n && count[j]<0){
    //     // cout<<"loop 1"<<endl;
    //     j++;
    // }
    // if(j==n){
    //     cout<<"0"<<endl;
    //     return;
    // }
    // while(i<n && count[i]<0){
    //     // cout<<"loop 2"<<endl;
    //     while(j<n && count[i]+count[j]<0){
    //         // cout<<"loop 3"<<endl;
    //         j++;
    //     }
    //     if(j>=n){
    //         break;
    //     }else{
    //         ans++;
    //         // cout<<"i is "<<i<<" j is "<<j<<endl;
    //         marked[i]=true;
    //         marked[j]=true;
    //         j++;
    //     }
    //     i++;

    // }
    // int rem=0;

    // for(int k=0;k<n;k++){
    //     if(count[k]>=0 && marked[k]==false){
    //         rem++;

    //     }
    // }
    // ans=ans+rem/2;
    // cout<<ans<<endl;
    int ans=0;
    int x=pos.size();
    vector<bool>marked(pos.size(),false);
    int y=neg.size();
    while(i<y){
        while(j<x && neg[i]+pos[j]<0){
            j++;
        }
        if(j==x){
            break;
        }else{
            marked[j]=true;
            j++;
            ans++;

        }
        i++;
    }
    int count=0;
    for(int k=0;k<pos.size();k++){
        if(marked[k]==false){
            count++;
            
        }
    }
    ans=ans+count/2;
    cout<<ans<<endl;
    
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