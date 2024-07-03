#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int>arr(n);
        for(int i=0; i<n; i++) cin >> arr[i];
        sort(arr.begin(),arr.end());
        if(arr[0] != arr[1]) {
            cout << "YES\n";
        }
        else {
            bool PASS = 0;
            for(int i=1; i<n; i++) {
                if(arr[i] % arr[0] != 0) PASS = 1;
            }
            if(PASS) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}