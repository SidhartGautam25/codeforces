#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX


void build(int ind,int low,int high,vector<int>&arr,vector<int>& seg){
    if(low==high){
        seg[ind]=arr[low];
        return;
    }
    int mid=(low+high)/2;
    build(2*ind+1,low,mid,arr,seg);
    build(2*ind+1,mid+1,high,arr,seg);
    seg[ind]=min(seg[2*ind+1],seg[2*ind+2]);
}

int query(int ind,int low,int high,int l,int r,vector<int>&seg){
    // no overlap
    if(r<low or high<l) return INT_MAX;

    //complete overlap
    if(low>=l and high<=r) return seg[ind];

    int mid=(low+high)/2;
    int left=query(2*ind+1,low,mid,l,r,seg);
    int right=query(2*ind+2,mid+1,high,l,r,seg);
    return min(left,right);
}

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>seg(4*n);
    build(0,0,n-1,arr,seg);
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        int ans=query(0,0,n-1,l,r,seg);
        cout<<ans<<endl;
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