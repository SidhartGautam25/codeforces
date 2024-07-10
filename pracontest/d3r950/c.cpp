#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(int tt){
   
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  vector<int>b(n);
  for(int i=0;i<n;i++){
    cin>>b[i];
  }
  int m;
  cin>>m;
  vector<int>d(m);
  map<int,int>mp;
  map<int,int>count;
  int last;
  for(int i=0;i<m;i++){
    cin>>d[i];
    mp[d[i]]=i;
    count[d[i]]++;
    if(i==m-1){
        last=d[i];
    }
  }
  vector<bool>done(m,false);
  bool lastused=false;
  for(int i=0;i<n;i++){
    if(b[i]==last){
        lastused=true;

    }
    if(arr[i]==b[i]){
        done[mp[b[i]]]=true;
    }else{
        if(mp.find(b[i])==mp.end()){
            cout<<"NO"<<endl;
            return;
        }else{
            done[mp[b[i]]]=true;
            count[b[i]]--;
            
            if(count[b[i]]<0){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
  }


if(!lastused){
    cout<<"NO"<<endl;
    return;
}
  cout<<"YES"<<endl;




}
 

 
signed main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        solve(i);
        
    }
    return 0;
}