#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX



void solve(){
   
        int n;
        cin >> n;
        string result="";
        for (int d = 9; d >= 1; d--)
            if (n >= d) {
                result = char('0' + d) + result;
                n -= d;
            }
        cout << result << endl;
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