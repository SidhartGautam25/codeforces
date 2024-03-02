#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007



void solve(){
   int n,t;
   cin>>n>>t;
   string a,b;
   cin>>a>>b;
   int samea=0;
   int sameb=0;
   int same=n-t;
   int diffa=0;
   int diffb=0;
   int i=0;
   vector<char>ans(n);
   vector<bool>done(n,false);
   for(int i=0;i<n;i++){
    
    if(a[i]==b[i] and (samea<same and sameb<same)){
        done[i]=true;
        ans[i]=a[i];
        //cout<<"for i "<<i<<" ans [i] is "<<ans[i]<<endl;
        samea++;
        sameb++;
    }
    if(sameb==same and samea==same){
        break;
    }
   }
   for(int i=0;i<n;i++){
      if(done[i]==false){
         if(sameb<same){
             if(samea==sameb){
                ans[i]=a[i];
                //cout<<"for i "<<i<<" ans i is "<<ans[i]<<endl;
                done[i]=true;
                samea++;
                diffb++;

             }else if(samea>sameb){
                ans[i]=b[i];
                //cout<<"for i "<<i<<" ans i "<<ans[i]<<endl;
                done[i]=true;
                sameb++;
                diffa++;

             }
         }
          else if(sameb==same and samea==same){
         
        done[i]=true;
        for(char c='a';c<='z';c++){
            if(c != a[i] and c != b[i]){
                //cout<<"for i "<<i<<" ans i "<<c<<endl;
                ans[i]=c;
                break;
            }
        }
        
        diffa++;
        diffb++;
    
      }
      }
    
   }
   string output="";
  // cout<<ans<<endl;
  if(!(samea==same and sameb==same and  diffa==t and diffb==t)){
          cout<<"-1"<<endl;
          return;
   }
   for(int i=0;i<n;i++){
    if(ans[i]>='a' and ans[i]<='z'){
        cout<<ans[i];
    }
      
   }
  // cout<<"output "<<output<<endl;
   //cout<<"same "<<same<<" samea "<<samea<<" sameb "<<sameb<<" diffa "<<diffa<<" diffb "<<diffb<<" t "<<t<<endl;
   
   
  

   
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    //cin>>t;
    while(t--){
        solve();
     }

    return 0;
}