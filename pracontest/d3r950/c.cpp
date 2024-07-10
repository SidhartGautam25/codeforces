#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(int tt){
    if(tt==231){
        int n;
        cin>>n;
        cout<<n<<endl;
        vector<int>arr(n);
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            cout<<arr[i]<<"  ";
        }
        cout<<endl;
         for(int i=0;i<n;i++){
            cin>>b[i];
            cout<<b[i]<<"  ";
        }
        cout<<endl;
        int m;
        cin>>m;
        cout<<m<<endl;
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            cout<<x<<"  ";
        }
        cout<<endl;

    }
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
  for(int i=0;i<m;i++){
    cin>>d[i];
    mp[d[i]]=i;
    count[d[i]]++;
  }
  vector<bool>ind(n,false);
  vector<bool>done(m,false);
  int updated=0;
  for(int i=0;i<n;i++){
    if(arr[i]==b[i]){
        ind[i]=true;
        done[mp[b[i]]]=true;
    }else{
        if(mp.find(b[i])==mp.end()){
            cout<<"NO"<<endl;
            return;
        }else{
            ind[i]=true;
            done[mp[b[i]]]=true;
            // cout<<"ith is done true "<<mp[b[i]]<<" b[i] is "<<b[i]<<endl;
            count[b[i]]--;
            updated++;
            if(count[b[i]]<0){
                cout<<"NO"<<endl;
                return;
            }
           

        }
    }

  }

//   for(auto it:count){
//     if(it.second>0){
//         if(updated>0){
//             continue;
//         }else{
//             cout<<"NO"<<endl;
//             return;
//         }
//     }
//   }
// cout<<"starts"<<endl;
//  for(int i=0;i<m;i++){
//      if(done[i]){
//          cout<<"true"<<endl;
//      }else{
//          cout<<"false"<<endl;
//      }
//  }
if(done[m-1]==false){
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