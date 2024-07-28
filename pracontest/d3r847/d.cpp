#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX



void solve(){
     int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> cnt;
    set<int> b;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        cnt[a[i]]++;
        b.insert(a[i]);
        // b.insert(a[i] + 1);
    }
    int last = 0;
    int lastNum=0;
    int res = 0;
    for (auto x: b) {
        int c = cnt[x];
        if(x != (lastNum+1)){
            last=0;
        }
        res += max(0, c - last);
        last = c;
        lastNum=x;
    }
    cout << res << '\n';


   
    
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