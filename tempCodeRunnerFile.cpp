#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve()
{
    string s="13:25";
    //cin>>s;
    string hr=s.substr(0,2);
    string min=s.substr(2,2);
    int h=stoi(hr);
    int m=stoi(min);
    cout<<"hour "<<h<<" min "<<m<<endl;

 

   
   

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