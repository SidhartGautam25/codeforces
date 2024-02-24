#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n,sx,sy;
    cin>>n>>sx>>sy;
    vector<pair<int,int>>arr(n);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        pair temp;
        temp.first=a;
        temp.second=b;
        arr[i]=temp;

    }
    int quad1=0;
    int quad2=0;
    int quad3=0;
    int quad4=0;
    int line1=0;
    int line2=0;
    int line3=0;
    int line4=0;

    for(int i=0;i<n;i++){
        int x=arr[i].first;
        int y=arr[i].second;
        if(x==sx){
            if(y>sy){
                line2++;
            }else{
                line4++;
            }
        }else if(y==sy){
            if(x>sx){
                line1++;
            }else{
                line3++;
            }
            // first quadrant
        }else if(x>sx and y>sy){
            quad1++;


        // second quadrant
        }else if(x<sx and y>sy){
            quad2++;
        // third quadrant
        }else if(x<sx and y<sy){
            quad3++;
        
        // fourth quadrant
        }else{
            quad4++;

        }
    }
    //int ans=max(quad1+line1,max(quad1+line2,max(quad2+line2,max(quad2+line3,max(quad3+line3,max(quad3+line4,max(quad4+line4,quad4+line1)))))));
    int ans=max(ans,max(line1+quad1+quad4,max(line2+quad1+quad2,max(line3+quad2+quad3,line4+quad3+quad4))));
    int ans1=line1+quad1+quad4;
    int ans2=line2+quad1+quad2;
    int ans3=line3+quad3+quad2;
    int ans4=line4+quad4+quad3;
    int pointx,pointy;
    if(){
        pointx=sx+1;
        pointy=sy;


    }else if(ans==(line2+quad1+quad2)){
        pointx=sx;
        pointy=sy+1;

    }else if(ans==(line3+quad2+quad3)){
        pointx=sx-1;
        pointy=sy;

    }else{
        pointx=sx;
        pointy=sy-1;

    }


    cout<<ans<<endl;






}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    while(t--){
        solve();
     }

    return 0;
}