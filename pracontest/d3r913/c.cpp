
#include <bits/stdc++.h>
using namespace std;




void solve() {
    int n;
    cin >> n;
    vector<int> cnt(26, 0);
    string s;
    cin >> s;
    for (char c : s) {
        cnt[c - 'a']++;
    }
    
    int mmax=0;
    for(int i=0;i<cnt.size();i++){
        mmax=max(mmax,cnt[i]);
    }
    cout << max(n % 2, 2 * mmax - n) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
