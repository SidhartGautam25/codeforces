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
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            count++;
        }
    }
    if(k>=count){
        string res="";
        for(int i=0;i<(n-k);i++){
            res=res+"0";
        }
        cout<<res<<endl;
        return;
    }else{
        for(int i=0;i<n;i++){
            if(k>0){
                if(s[i]=='1'){
                    s[i]='0';
                    k--;
                }
            }else{
                cout<<s<<endl;
                return;
            }
        }
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