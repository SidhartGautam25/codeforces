#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(k%2==0){
        sort(s.begin(),s.end());
        cout<<s<<endl;
        return;
    }else{
        string odd="";
        string even="";
        for(int i=0;i<n;i++){
            if(i%2==0){
                even=even+s[i];
            }else{
                odd=odd+s[i];
            }
        }
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        int o=0;
        int e=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                s[i]=even[e];
                e++;
            }else{
                s[i]=odd[o];
                o++;
            }
        }
        cout<<s<<endl;
        return;

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