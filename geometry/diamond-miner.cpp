#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n;
    cin>>n;
   
    vector<ll>x(n);
    vector<ll>y(n);
    int j=0;
    int k=0;
    for(int i=0;i<2*n;i++){
       
        ll a,b;
        cin>>a>>b;
        if(a==0){
            y[j]=abs(b);
            j++;
        }else{
            x[k]=abs(a);
            k++;
        }
       
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    

    double ans=0;
    for(int i=0;i<n;i++){
        double x1=x[i];
        double y1=y[i];
        double temp=sqrt((x1*x1+y1*y1));
        ans=ans+temp;
    }
    printf("%.15lf\n",ans);

    
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