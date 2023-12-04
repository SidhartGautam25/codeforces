#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    vector<int>check(n+1,false);
    unordered_map<int,bool>mp;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr[i]=temp;

    }
    
    for(int i=0;i<n;i++){
        int x=arr[i];
        if(x>n){
            while(x>0){
                x=x/2;
                if( x>0 and x<=n ){
                      if(check[x] != true){
                        check[x]=true;
                        break;
                      }
                }
            }

        }else{
            if(check[x]){
                while(x>0){
                    x=x/2;
                    if(check[x] != true){
                        check[x]=true;
                        break;
                    }

                }

            }else{
                check[x]=true;
            }
        }
    }
    for(int i=1;i<check.size();i++){
        if(check[i]==false){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
 
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