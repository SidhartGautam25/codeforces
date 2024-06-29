
#include <bits/stdc++.h>
using namespace std;

#define ll long long


void solve() {
    ll n,m;
    cin>>n>>m;
    vector<ll>a(n);
    vector<ll>b(m);
    ll suma=0;
    ll sumb=0;
    vector<ll>asum(n+1,0);
    vector<ll>bsum(m+1,0);
    ll diff=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        suma=suma+a[i];
        asum[i+1]=suma;
    }
    for(ll i=0;i<m;i++){
        cin>>b[i];
        sumb=sumb+b[i];
        bsum[i+1]=sumb;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    // ll diff=0;
    // ll as=0;
    // ll ae=n-1;
    // ll bs=0;
    // ll be=m-1;
    // ll count=0;
    // while(ae>=as){
    //     if(ae>as){
    //         diff=diff+abs(b[be]-a[as]);
    //         diff=diff+abs(a[ae]-b[bs]);
    //         as++;bs++;ae--; be--;

    //     }else if(ae==as){
    //         diff=diff+max(abs(a[ae]-b[be]),abs(a[ae]-b[bs]));
    //         break;
    //     }
        
    // }
    // cout<<diff<<endl;
    // while(as<n){
    //     ll t1=abs(a[as]-b[bs]);
    //     ll t2=abs(a[as]-b[be]);
    //     if(t1<t2){
    //         diff=diff+t1;
    //         bs++;
    //     }else{
    //         diff=diff+t2;
    //         be--;
    //     }
    //     as++;
    // }
    // cout<<diff<<endl;
    // diff=max(abs(suma-bsum[n+1]),abs(suma-(sumb-bsum[m-n])));
    // cout<<diff<<endl;
    // ll i=0;
    // ll j=m-1;
    // bool end=true;
    // for(ll i=0;i<n;i++){
    //     if(end){
    //          ll d1=abs(a[i]-b[j]);
    //     ll d2=abs(a[i]-b[n-i-1]);
    //     if(d1>d2){
    //         diff=diff+d1;
    //         j--;
    //     }else{
    //         diff=diff+d2;
    //         j=n-i-1;
    //         j--;
    //         end=false;

    //     }

    //     }else{
    //         diff=diff+abs(a[i]-b[j]);
    //         j--;
    //     }
       
    // }
    // cout<<diff<<endl;
    ll ds=0;
    ll de=0;
    vector<ll>start(n+1,0);
    vector<ll>end(n+1,0);
    for(ll i=0;i<n;i++){
        ds=ds+abs(a[i]-b[m-1-i]);
        start[i+1]=ds;
        de=de+abs(a[n-i-1]-b[i]);
        end[i+1]=de;
    }
    ll ans=0;
    for(ll i=1;i<=n;i++){
        ans=max(ans,start[i]+end[n-i]);
        ans=max(ans,end[i]+start[n-i]);
    }
    cout<<ans<<endl;

   
    
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
