#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    int i=0;
    vector<char>req1={'m','a','p','i','e'};
    vector<char>req2={'m','a','p'};
    vector<char>req3={'p','i','e'};

    while(i<n){
        if(s[i]=='m'){
            int j=0;
            int k=i;
            while(k<n){
                char c=s[k];
                if(c==req1[j]){
                    j++;
                    k++;
                    if(j==4){
                        break;
                    }

                }else{
                    break;
                }
            }
            if(j==5){
                count++;
                 
                i=i+5;

            }else if(j>=3){
                count++;
                
                i=i+3;

            }else{
                i++;
            }

        }else if(s[i]=='p'){
            int j=0;
            int k=i;
            while(k<n){
                char c=s[k];
                if(c==req3[j]){
                    j++;
                    k++;
                    if(j==3){
                        break;
                    }

                }else{
                    break;
                }

            }
            if(j==3){
                count++;
               
                i=i+3;
            }else{
                i++;
            }

        }else{
            i++;
        }

    }
    cout<<count<<endl;
    
   
}
 

 
signed main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        solve();
        
    }
    return 0;
}