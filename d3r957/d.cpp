#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(int tt){
    int n,m,k;
    cin>>n>>m>>k;
    string river;
    cin>>river;
    river="L"+river;
    // int i=0;
    // int swim=0;
    // while(i<n){
    //     if(river[i]=='L' || i==0){
    //         int next=i+1;
    //         int step=1;
    //         while(next<n and river[next] != 'L'){
    //             next++;
    //             if(next==n){
    //                 cout<<"YES"<<endl;
    //                 return;
    //             }
    //             step++;
    //             if(next<n && river[next]=='L'){
    //                 break;
    //             }
    //         }
    //         if(step<=m){
    //             i=next;
    //         }else{
    //             i=i+1;
    //             while(i<n && river[i]=='W'){
    //                 swim++;
    //                 if(swim>k){
    //                     cout<<"NO"<<endl;
    //                     return;
    //                 }
    //                 if(next-i<=m){
    //                     i=next;
    //                     break;
    //                 }
    //             }if(i>=n){
    //                 cout<<"YES"<<endl;
    //                 return;
    //             }else{
    //                 cout<<"NO"<<endl;
    //                 return;
    //             }

    //         }
    //     }
    // }
    // cout<<"YES"<<endl;

   vector<int>nextLog(n+1,-1);
   for(int i=0;i<=n;i++){
       if(river[i]=='L'){
          int j=i+1;
          while(j<=n and river[j] != 'L'){
            j++;
          }
          if(j<=n){
            nextLog[i]=j;

          }else{
            break;

          }
       }else if(river[i]=='W'){
         if(i==0 || nextLog[i-1]==-1){
            int j=i+1;
            while(j<=n and river[j] != 'L'){
                j++;
            }
            if(j<=n){
                nextLog[i]=j;
            }else{
                break;
            }

         }else{
            nextLog[i]=nextLog[i-1];
         }
       }
   }

   int i=0;
   int swim=0;
   while(i<=n){
    //   cout<<"i is "<<i<<endl;
    if(river[i]=='L'){
        int next=nextLog[i];
        if(next==-1){
            if(i+m>n){
                break;
            }else{
                // cout<<"hehehe "<<endl;
                int j=i+m;
                while(j>i && river[j]=='C'){
                    j--;
                }
                // cout<<"j is "<<j<<endl;
                if(i==j){
                    cout<<"NO"<<endl;
                    return;
                }else{
                    i=j;
                    continue;
                }
            }
        }
        if(next-i<=m){
            i=next;

        }else{
            // cout<<"at present i am "<<i<<endl;
            i=i+m;
            // cout<<"i reached "<<i<<endl;
        }
    }else if(river[i]=='W'){
        // cout<<"i am in water at i "<<i<<endl;
        swim++;
        // cout<<"i swimed "<<swim<<endl;
        if(swim>k){
            cout<<"NO"<<endl;
            return;
        }
        i++;

    }else{
        cout<<"NO"<<endl;
        return;

    }
   }
   cout<<"YES"<<endl;
   return;
    
}
 

 
signed main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        solve(i);
        
    }
    return 0;
}