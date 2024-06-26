#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX

// for geometry
// https://victorlecomte.com/cp-geo.pdf

int get(vector<int>& dp, int pos, int n) {
    if (pos > n) {
        return n + 1;
    }
    if (pos == n) {
        return 0;
    }
    return dp[pos];
}




void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> dp(n, n + 1);

    
    dp[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) {
        dp[i] = min(dp[i + 1] + 1,get(dp, i + a[i] + 1, n));
    }
    cout << dp[0] << endl;
   
    
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