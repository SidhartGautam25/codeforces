#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007



void solve(){
    string s;
    cin>>s;
    int n=s.size();
    int i=0;
    int count=0;
    int counta=0;
    int rem=n;
    while(i<n){
        if(s[i]=='A'){
            count++;
            int cc=0;
            while(i<n and s[i]=='A'){
                counta++;
                cc++;
                i++;
            }
            rem=min(rem,cc);
        }else{
            i++;
        }
    }
    int countb=n-counta;
    if(countb>=count){
        cout<<counta<<endl;
        return;
    }else{
        int ans=counta-rem;
        if(ans>=0){
            cout<<ans<<endl;
            return;
        }else{
            cout<<"0"<<endl;
            return;
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