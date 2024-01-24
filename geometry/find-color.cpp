#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve()
{
   int x,y;
   cin>>x>>y;
   int quad;
   //first
   if(x>0 and y>0){
       double tempx=x;
       double tempy=y;
       double dis=sqrt(tempx*tempx+tempy*tempy);
       int d=dis;
       if((d*d)==(x*x+y*y)){
         cout<<"black"<<endl;
         return;
       }else if(d%2==0){
        cout<<"black"<<endl;
       }else{
        cout<<"white"<<endl;
        return;
       }
    //second quadrant
   }else if(x<0 and y>0){
       double tempx=x;
       double tempy=y;
       double dis=sqrt(tempx*tempx+tempy*tempy);
       int d=dis;
       if((d*d)==(x*x+y*y)){
         cout<<"black"<<endl;
         return;
       }else if(d%2==0){
        cout<<"white"<<endl;
       }else{
        cout<<"black"<<endl;
        return;
       }

   }else if(x<0 and y<0){
    double tempx=x;
       double tempy=y;
       double dis=sqrt(tempx*tempx+tempy*tempy);
       int d=dis;
       if((d*d)==(x*x+y*y)){
         cout<<"black"<<endl;
         return;
       }else if(d%2==0){
        cout<<"black"<<endl;
       }else{
        cout<<"white"<<endl;
        return;
       }

   }else{
    double tempx=x;
       double tempy=y;
       double dis=sqrt(tempx*tempx+tempy*tempy);
       int d=dis;
       if((d*d)==(x*x+y*y)){
         cout<<"black"<<endl;
         return;
       }else if(d%2==0){
        cout<<"white"<<endl;
       }else{
        cout<<"black"<<endl;
        return;
       }

   }
   
   

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}