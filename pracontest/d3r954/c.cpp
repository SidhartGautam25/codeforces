#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX



void solve(){
    
   int n,m;
   cin>>n>>m;
   string s,updates;
   cin>>s;
   vector<int>ind(m);
   map<int,int>mpi;
   for(int i=0;i<m;i++){
    cin>>ind[i];
    mpi[ind[i]]++;
   }
   cin>>updates;
//   cout<<"started"<<endl;
   vector<char>upd(m);
//   int j=0;
   for(int i=0;i<m;i++){
       char c=updates[i];
      upd[i]=c;
   }
//   cout<<"1"<<endl;
   sort(upd.begin(),upd.end());
//   cout<<"2"<<endl;
   int j=0;
   for(auto it:mpi){
     int i=it.first;
     s[i-1]=upd[j];
     j++;
   }
   cout<<s<<endl;
   
   


    
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