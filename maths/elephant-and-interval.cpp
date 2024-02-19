#include <bits/stdc++.h>
using namespace std;

#define ll long long
//#define mod  998244353

            
 



ll ncr(ll n,ll r){
    ll prod=1;
      for(ll i = 1; i <= r; i++){
            prod = prod * (n - r + i) / i;
        }
        return prod;
}

ll power(ll x, ll y)
{
    ll temp;
    if (y == 0){
        ll ans=1;
        return ans;

    }
       
    temp = power(x, y / 2);
    if (y % 2 == 0)
        return ((temp) * (temp));
    else{
        ll p1=((x)*(temp));
        ll p2=((p1)*(temp))%mod;
        return p2;
    }
        
}

ll find(ll n){
    if(n<10){
        return n;
    }else if(n<100){
        ll d=n/11;
        return d+9;
    }
    vector<ll>digits;
    ll t=n;
    while(t>0){
        ll d=t%10;
        t=t/10;
        digits.push_back(d);
    }
    ll first=digits[digits.size()-1];
    ll second=digits[0];
    ll size=digits.size();
    cout<<endl;
    //cout<<"digits are "<<endl;
    // for(ll i=0;i<size;i++){
    //     cout<<digits[i]<<" ";
    // }
    // cout<<endl;
    ll num=0;
    for(ll i=1;i<size-1;i++){
        ll d=digits[i];
        num=num+power(10,i-1)*d;
    }
    //cout<<"num is "<<num<<endl;
    ll ans=18;
     //cout<<"first "<<first<<" second "<<second<<endl;
    for(ll s=1;s<=(size-2);s++){
        if(s<(size-2)){
            ll add=9*(power(10,s));
            //cout<<"for s "<<s<<" addition is "<<add<<endl;
            ans=ans+9*(power(10,s));
        }else if(s==(size-2)){
            // if(first<second){
            //     ll add=(first-1)*(power(10,s));
            //     cout<<"for s "<<s<<" addition is "<<add<<endl;
            //     ans=ans+add;
            // }else{
                ll add=(first-1)*(power(10,s));
               // cout<<"first "<<first<<" second "<<second<<endl;
                // cout<<"for s "<<s<<" add is "<<add<<endl;
                ans=ans+(first-1)*(power(10,s));
                if(first==second or (first<second)){
                     ans=ans+(num+1);
                    
                }else{
                     ans=ans+num;
                    
                }
               
        
        }
    }


    return ans;

}



void solve(){
    ll l,r;
    cin>>l>>r;
    ll x=find(l-1);
    //cout<<"for l "<<l<<" ans is "<<x<<endl;
    ll y=find(r);
    //cout<<"for l "<<r<<" ans is "<<y<<endl;
    ll ans=y-x;
    cout<<ans<<endl;

    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    
    //cin>>t;
    while(t--){
        solve();
     }

    return 0;
}