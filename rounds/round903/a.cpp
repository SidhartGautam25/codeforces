#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define mod 1000000007


     
    void solve() {
        int n, m;
        cin >> n >> m;

        string s1, s2;
        cin >> s1 >> s2;
    int ans = 0;
    while (s1.size() <= 1000) {
        if (s1.find(s2) == string::npos) {
            s1 += s1;
            ans++;
        } else {
            cout << ans << "\n";
            return;
        }
    }
    cout << -1 <<endl;
    return;
}

int main() {
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}