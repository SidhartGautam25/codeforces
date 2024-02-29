#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007



void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int count=0;
        for(int i=0;i<k/2;i++){
            int mmax=0;
            map<char,int>mp;
            int x=0;
            int kk=k;
            int ii=i;
            while(x<n/k){
                mp[s[ii]]++;
                mp[s[kk-ii-1]]++;
                mmax=max(mmax,mp[s[ii]]);
                mmax=max(mmax,mp[s[kk-ii-1]]);
                kk=kk+k;
                ii=ii+k;
                x++;
            }
            count=count+(2*(n/k)-mmax);
        }
    if(k%2==1){
        int i=k/2;
        map<char,int>mp;
        int mmax=0;
        while(i<n){
            mpp[s[i]]++
            mmax=max(mmax,mp[s[i]]);
            i=i+k;
        }
        count=count+(n/k-mmax);
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