#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll n,q;
    cin>>n>>q;
    vector<ll>a(n);
    vector<ll>b;
    for(int i=0;i<n;i++){
        ll temp;
        cin>>temp;
        a[i]=temp;
    }
    for(int i=0;i<q;i++){
        int temp;
        cin>>temp;
        ll x=1<<temp;
       if(b.empty()==true or b.back()>x){
        b.push_back(x);
       }
    }

    for(int i=0;i<q;i++){
        for(int j=0;j<n;j++){
            if(a[j]%b[i]==0){
                a[j]=a[j]+(b[i]/2);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
 
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