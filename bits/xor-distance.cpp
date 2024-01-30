#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

ll checkAt(ll num,ll i){
    ll bitmask=1<<i;
    ll result=num&bitmask;
    if(result==0){
        return 0;
    }
    return 1;
}

void solve()
{
    
   ll a,b,c;
   cin>>a>>b>>c;
   ll temp=0;
   //ll ans=0;
   for(ll i=60;i>=0;i--){
     
     if(checkAt(a,i) == checkAt(b,i)){
           continue;

     }else{
        if(a==b){
            cout<<"0"<<endl;
            return;
        }else if(temp+(1<<i)<=c){
            ll tempa=a^(1<<i);
            ll tempb=b^(1<<i);
            if(abs(tempa-tempb)<abs(a-b)){
                a=tempa;
                b=tempb;
                temp=temp+(1<<i);
            }

        }else{
            continue;
        }
     }

   }
   ll ans=abs(a-b);
   cout<<ans<<endl;
   

   

}
ll main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}
