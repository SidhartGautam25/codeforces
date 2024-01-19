#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007




void solve(){       
    string str;
    ll pos;
    cin>>str;
    cin>>pos;
    ll n=str.size();
    stack<ll>stk;
    for(ll i=0;i<n;i++){
        if(stk.size()==0){
            stk.push(i);
        }else if(str[stk.top()]>str[i]){
            while(stk.size()>0 and str[stk.top()]>str[i]){
                ll j=stk.top();
                arr.push_back(j);
                stk.pop();
            }
            stk.push(i);
        }else{
            stk.push(i);
        }
 
    }     
    while(stk.size()>0){
        ll temp=stk.top();
        arr.push_back(temp);
        stk.pop();
    }       
    ll i=0;
    ll size=n;
    while((pos-n)>0){
        pos=pos-n;
        n=n-1;
        i++;
    }
    vector<bool>remIndex(size,false);
    for(int k=0;k<i;k++){
        remIndex[arr[k]]=true;
    }
    int j=0;
    while(pos>0){
        if(remIndex[j]==true){
            j++;

        }else{
            pos--;
            j++;
        }
    }
    cout<<str[j-1];


    
   
 
  

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t>0){
    
        solve();
        cout<<endl;
        t=t-1;
     }

    return 0;
}