#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    vector<int>counto(n);
    vector<int>countz(n);
    int one=0;
    int zero=0;
    for(int i=0;i<n;i++){
         if(a[i]=='1'){
            one++;
         }else{
            zero++;
         }
         counto[i]=one;
         countz[i]=zero;
    }
    int i=0;
    while(i<n){
        if(a[i] != b[i]){
            if(i != 0){
                if(counto[i-1] != countz[i-1]){
                    cout<<"NO"<<endl;
                    return;
                }
            }
            i++;
            while(i<n and (a[i] != b[i])){
                i++;
            }
            if(counto[i-1] != countz[i-1]){
                cout<<"NO"<<endl;
                return;
            }
        }else{
            i++;
        }
    }
    cout<<"YES"<<endl;
    return;

 
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