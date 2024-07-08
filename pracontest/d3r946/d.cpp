#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   string ans="";
//    int x=0;
//    int y=0;
//    map<int,int>mpx;
//    map<int,int>mpy;
//    string ans;
//    mpx[0]=1;
//    mpy[0]=1;
//    for(int i=0;i<n;i++){
//      char c=s[i];
//      if(c=='N'){
//         y=y+1;
//         mpy[y]++;
//      }else if(c=='S'){
//         y=y-1;
//         mpy[y]++;
//      }else if(c=='E'){
//         x=x+1;
//         mpx[x]++;
//      }else{
//         x=x-1;
//         mpx[x]--;
//      }
//    }
//    if(y%2==1 || x%2==1){
//     cout<<"NO"<<endl;
//     return;
//    }
//    if(mpy.find(y/2) == mpy.end()){
//       cout<<"NO"<<endl;
//       return;
//    }
//    if(mpx.find(x/2) == mpx.end()){
//       cout<<"NO"<<endl;
//       return;
//    }
//    int xdis=0;
//    int ydis=0;

//     for(int i=0;i<n;i++){
//      char c=s[i];
//      if(c=='N'){
//         // if(y>0){
//             if(ydis<(y/2)){
//                 ans=ans+"R";
//                 ydis=ydis+1;
//             }else{
//                 ans=ans+"H";
//             }


//         // }else{
//             //   if(ydis<(y/2)){
//             //     ans=ans+"R";
//             // }else{
//             //     ans=ans+"H";
//             //     ydis=ydis-1;
//             // }

//         // }
       
//      }else if(c=='S'){

//         //  if(y>0){
//             if(ydis<(y/2)){
//                 ans=ans+"H";
//             }else{
//                 ans=ans+"R";
//                 ydis=ydis-1;
//             }


//         // }else{
//         //       if(ydis<(y/2)){
//         //         ans=ans+"H";
//         //     }else{
//         //         ans=ans+"R";
//         //         ydis=ydis-1;
//         //     }

//         // }

       
//      }else if(c=='E'){
//         // if(x>0){
//             if(xdis<(x/2)){
//                 ans=ans+"R";
//                 xdis=xdis+1;
//             }else{
//                 ans=ans+"H";
//             }


//         // }else{
//         //       if(xdis<(x/2)){
//         //         ans=ans+"H";
//         //     }else{
//         //         ans=ans+"R";
//         //     }

//         // }
//      }else{
//         // if(x>0){
//             if(xdis<(x/2)){
//                 ans=ans+"H";
//             }else{
//                 ans=ans+"R";
//                 xdis=xdis-1;
//             }


//         // }else{
//         //       if(xdis<(x/2)){
//         //         ans=ans+"R";
//         //     }else{
//         //         ans=ans+"H";
//         //     }

//         // }
//      }
//    }




//    cout<<ans<<endl;

int rx=0,hx=0,ry=0,hy=0;
int hstep=0;
int rstep=0;
for(int i=0;i<n;i++){
    char c=s[i];
    if(c=='N'){
        if(ry<hy){
            ry=ry+1;
            ans=ans+"R";
            rstep++;

        }else if(ry>hy){
            hy=hy+1;
            ans=ans+"H";
            hstep++;

        }else{
            if(rstep<=hstep){
                ry=ry+1;
                ans=ans+"R";
                rstep++;
            }else{
                hy=hy+1;
                ans=ans+"H";
                hstep++;
            }
        }

    }else if(c=='S'){
        if(ry<hy){
            hy=hy-1;
            ans=ans+"H";
            hstep++;

        }else if(ry>hy){
            ry=ry-1;
            ans=ans+"R";
            rstep++;

        }else{
             if(rstep<=hstep){
                ry=ry-1;
                ans=ans+"R";
                rstep++;
            }else{
                hy=hy-1;
                ans=ans+"H";
                hstep++;
            }

        }

    }else if(c=='E'){
         if(rx<hx){
            rx=rx+1;
            ans=ans+"R";
            rstep++;

        }else if(rx>hx){
            hx=hx+1;
            ans=ans+"H";
            hstep++;

        }else{
            if(rstep<=hstep){
                rx=rx+1;
                ans=ans+"R";
                rstep++;
                
            }else{
                 hx=hx+1;
                ans=ans+"H";
                hstep++;
                
            }
        }


    }else{
         if(rx<hx){
            hx=hx-1;
            ans=ans+"H";
            hstep++;

        }else if(rx>hx){
            rx=rx-1;
            ans=ans+"R";
            rstep++;

        }else{
              if(rstep<=hstep){
                rx=rx-1;
                ans=ans+"R";
                rstep++;
                
            }else{
                 hx=hx-1;
                ans=ans+"H";
                hstep++;
                
            }

        }


    }
}
// cout<<"ans "<<ans<<" hx "<<hx<<" rx "<<rx<<endl;
if(hx==rx && hy==ry){
    if(rstep>0 && hstep>0){
         cout<<ans<<endl;
    return;
        
    }
    
   
}
cout<<"NO"<<endl;




}
 

 
signed main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        solve();
        
    }
    return 0;
}