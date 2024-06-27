#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX



void solve(){
  int n,k;
  cin>>n>>k;
  vector<int>arr(n);
  int diff=k;
  int countEven=0;
  int countOdd=0;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    arr[i]=x;
    int rem=x%k;
    if(rem<0){
        rem=rem+k;
    }
    int d=(k-rem)%k;
    diff=min(diff,d);
    if(x%2==0){
        countEven++;
    }else{
        countOdd++;
    }
  }
  if(k==2 || k==3 || k==5){
    cout<<diff<<endl;
    return;
  }
  if(diff==0){
    cout<<diff<<endl;
    return;
  }else if(countEven>=2){
    cout<<"0"<<endl;
    return;
  }else{
    if(countEven==1){
        if(countOdd>=1){
            cout<<"1"<<endl;
            return;
        }else{
            cout<<diff<<endl;
            return;
        }
    }else if(countEven==0){
        if(countOdd>=2){
            cout<<min(diff,2)<<endl;
            return;
        }else{
            if(countOdd==1){
                cout<<diff<<endl;
                return;
            }

        }
    }
  }
  cout<<diff<<endl;
  
  
    
    
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