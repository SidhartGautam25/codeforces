#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // int alpl,arpr,armr,alml;

    // alpl=arr[0];
    // arpr=arr[0];
    // armr=arr[0];
    // alml=arr[0];

    // int la,lb,ra,rb;

    // la=0;
    // lb=0;
    // ra=0;
    // rb=0;

    // for(int i=1;i<n;i++){
    //     if(alpl<(arr[i]+i)){
    //         alpl=arr[i]+i;
    //         la=i;
    //     }
    //     //alpl=max(alpl,arr[i]+i);
    //     //arpr=min(arpr,arr[i]+i);
    //     if(arpr>(arr[i]+i)){
    //         arpr=arr[i]+i;
    //         ra=i;
    //     }
    //     //armr=max(armr,arr[i]-i);
    //     if(armr<(arr[i]-i)){
    //         armr=arr[i]-i;
    //         rb=i;
    //     }
    //     //alml=min(alml,arr[i]-i);
    //     if(alml>(arr[i]-i)){
    //         alml=arr[i]-i;
    //         lb=i;
    //     }
    // }
    // cout<<"alpl "<<alpl<<" arpr "<<arpr<<" la "<<la<<" ra "<<ra<<endl;
    // cout<<"armr "<<armr<<" alml "<<alml<<" lb "<<lb<<" rb "<<rb<<endl;

    // if((alpl>=(arpr+1)) and (la<ra and arr[la]>arr[ra])){
    //     cout<<"YES "<<endl;
    //     cout<<(la+1)<<" "<<(ra+1)<<endl;
    //     return;
    // }else if((armr>=(alml+1))and(lb<rb and arr[rb]>arr[lb])){
    //     cout<<"YES "<<endl;
    //     cout<<(lb+1)<<" "<<(rb+1)<<endl;
    //     return;
    // }else{
    //     cout<<"NO"<<endl;
    // }

    for(int i=1;i<n;i++){
        if(abs(arr[i]-arr[i-1])>1){
            cout<<"YES"<<endl;
            cout<<(i)<<" "<<(i+1)<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    int i=1;
    while(t--){
       
        solve();
        i++;
     }

    return 0;
}
