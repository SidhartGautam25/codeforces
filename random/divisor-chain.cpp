#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long x;
    cin>>x;
    vector<int>ans;
   while (x != 1) {
        int d = 1;  // Default to 1 if no other divisor is available
        for (int i = 2; i <= x; ++i) {
            if (x % i == 0 && count(ans.begin(), ans.end(), i) < 2) {
                d = i;
                break;
            }
        }

        x -= d;
        ans.push_back(x);

        if (ans.size() > 1000) {
            cout <<"NO"<< endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    cout<<x<<" ";
    for(int i=0;i<ans.size();i++){
          cout<<ans[i]<<" ";
    }
    cout<<endl;

    
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}