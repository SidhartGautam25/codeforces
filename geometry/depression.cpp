#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve()
{
    string s;
    cin>>s;
    string hr=s.substr(0,2);
    string min=s.substr(3,2);
   
    int h=stoi(hr);
    int m=stoi(min);

   
    
    if(h>=12){
        h=h-12;
    }

    double angle=360;
    double tm=60;
    double th=12;
    double hh=h;
    double mm=m;
    double hrseg=30;


    double minangle=angle*(mm/tm);
    double hrangle=(angle*(hh/th))+(hrseg*(mm/tm));
    cout<<hrangle<<" "<<minangle<<endl;

 

   
   

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