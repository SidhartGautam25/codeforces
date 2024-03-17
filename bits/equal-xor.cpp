
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX


void solve(){
     int n,k;
     cin>>n>>k;
     vector<int>arr(2*n);
     for(int i=0;i<2*n;i++){
        cin>>arr[i];
     }
     map<int,int>mpa;
     map<int,int>mpb;
     for(int i=0;i<n;i++){
        mpa[arr[i]]++;
     }
     for(int i=n;i<2*n;i++){
        mpb[arr[i]]++;
     }
     vector<int>seta(2*k);
     vector<int>setb(2*k);
     int ia=0;
     int ib=0;
     int s=2*k;
     for(auto it:mpa){
        int a=it.first;
        int f=it.second;
        if(f==2){
             if(ia+2<=s){
            seta[ia]=a;
            ia++;
            seta[ia]=a;
            ia++;

        }else{
            break;
        }

        }
       
     }
     if(ia != s){
        for(auto it:mpa){
            int a=it.first;
            int f=it.second;
            if(f==1){
                if(ia+1<=s){
                    seta[ia]=a;
                    ia++;
                }else{
                    break;
                }
            }
        }
     }


     for(auto it:mpb){
        int a=it.first;
        int f=it.second;
        if(f==2){
             if(ib+2<=s){
            setb[ib]=a;
            ib++;
            setb[ib]=a;
            ib++;

        }else{
            break;
        }

        }
       
     }
     if(ib != s){
        for(auto it:mpb){
            int a=it.first;
            int f=it.second;
            if(f==1){
                if(ib+1<=s){
                    setb[ib]=a;
                    ib++;
                }else{
                    break;
                }
            }
        }
     }

     for(int i=0;i<s;i++){
        cout<<seta[i]<<" ";
     }
     cout<<endl;
     for(int i=0;i<s;i++){
        cout<<setb[i]<<" ";
     }
     cout<<endl;
    
    
    
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