#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n,k,x;
  cin>>n>>k>>x;
  if(x != 1){
    cout<<"YES"<<endl;
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<1<<" ";
    }
    cout<<endl;
  }else if(k==1){
    cout<<"NO"<<endl;
  }else if(k==2 and n%2==1){
    cout<<"NO"<<endl;
  }else{
    cout<<"YES"<<endl;
    if(n%2==0){
        cout<<n/2<<endl;
        for(int i=0;i<n/2;i++){
            cout<<2<<" ";
        }
        cout<<endl;
    }else{
        if(n==3){
            cout<<1<<endl;
            cout<<3<<endl;
        }else{
            cout<<n/2<<endl;
            cout<<3<<" ";
            n=n-3;
            for(int i=0;i<n/2;i++){
                cout<<2<<" ";
            }
            cout<<endl;
        }

    }
  }

}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}