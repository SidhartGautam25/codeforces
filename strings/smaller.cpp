#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll q;
    cin>>q;
    vector<pair<ll,pair<ll,string>>>arr(q);
    for(ll i=0;i<q;i++){
        ll d,k;
        string s;
        cin>>d>>k;
        cin>>s;
        arr[i].first=d;
        arr[i].second.first=k;
        arr[i].second.second=s;
    }
    map<char,ll>mpa;
    map<char,ll>mpb;
    mpa['a']=1;
    mpb['a']=1;
    for(ll i=0;i<q;i++){
        ll d=arr[i].first;
        ll k=arr[i].second.first;
        string s=arr[i].second.second;
        if(mpb.size()>1){
            // cout<<"for i "<<i<<endl;
            // for(auto it:mpb){
            //     char c=it.first;
            //     ll f=it.second;
            //     //cout<<" c is "<<c<<" f is "<<f<<endl;
            // }
           
            cout<<"YES"<<endl;
            continue;
        }else{
            if(d==1){
                for(ll j=0;j<s.size();j++){
                    char c=s[j];
                    mpa[c]=mpa[c]+k;
                }

            }else if(d==2){
                //cout<<"s is "<<s<<endl;
                  for(ll j=0;j<s.size();j++){
                    char c=s[j];
                   //<<"c is "<<c<<endl;
                    mpb[c]=mpb[c]+k;
                }
               // cout<<"for i "<<i<<" size of mpb is "<<mpb.size()<<endl;

            }
            if(mpb.size()>1){
                cout<<"YES"<<endl;
            }else{
                if(mpa.size()>1){
                    cout<<"NO"<<endl;
                }else{
                    if(mpa['a']<mpb['a']){
                        cout<<"YES"<<endl;
                    }else{
                        cout<<"NO"<<endl;
                    }
                }
            }
            // cout<<"a count for a is "<<mpa['a']<<" for i "<<i<<endl;
            //  cout<<"a count for b is "<<mpb['a']<<" for i "<<i<<endl;
        }
    }
    
    

   
 
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