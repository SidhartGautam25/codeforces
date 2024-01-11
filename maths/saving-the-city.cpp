#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007



void solve(){
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    int n=s.size();
    int i=0;
    bool first=true;
    ll cost=0;
    bool comp=false;
    while(i<n and (s[i]=='0')){
      i++;
      if(i==n){
        comp=true;
      }
    }
    if(comp==false){
        cost=a;
    }
    while(i<n and (comp==false)){
        char c=s[i];
        if(c=='0'){
            int count=0;
            first=false;
            while(i<n and (s[i]=='0')){
                i++;
                count++;
                if(i==n){
                    comp=true;
                    break;
                }
            }
            if(a<(count*b) and (comp==false)){
                cost=cost+a;

            }else if(comp==false){
                cost=cost+count*b;

            }

        }else{
            i++;
        }
    }
    cout<<cost<<endl;
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