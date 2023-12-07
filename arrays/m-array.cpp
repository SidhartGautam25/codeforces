#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    unordered_map<int,int>mp;
    //cout<<"all good n"<<n<<endl;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        //cout<<"taken temp "<<temp<<endl;
        arr[i]=temp;
         //cout<<"taken 2"<<endl;
        int g=temp%m;
        if(mp.find(m) != mp.end()){
              mp[g]++;
        }else{
            mp[g]=1;
            
        }
      
    }
   // cout<<"all good 2"<<endl;
    int count=0;
    for(auto it:mp){
        int a=it.first;
        int b=it.second;
        if(a==0){
            count++;
            mp[a]=0;
            continue;
        }else if(b != 0){
             if(a==(m-a)){
                count=count+1;
                cout<<"inc by 1 for mod "<<a<<endl;

            }
            else if(mp.find(m-a) != mp.end()){
                 int c=mp[m-a];
                 mp[m-a]=0;
                 if(b==c){
                    count++;
                     cout<<"inc by 1 for mod "<<a<<endl;
                 }else{
                    count=count+abs(b-c);
                     cout<<"inc by "<<abs(b-c)<<" for mod "<<a<<endl;
                 }
                //  mp[m-a]=0;
                 
            }else{
                count=count+b;
                 cout<<"inc by "<<b<<" for mod "<<a<<endl;

            }
            mp[a]=0;
        }
    }
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
