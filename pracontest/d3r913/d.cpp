#include <bits/stdc++.h>
using namespace std;


// #define ll long long
// #define mod LLONG_MAX


bool check(const vector<pair<int, int>>& seg, int k) {
    int llimit = 0, rlimit = 0;
    for (const auto& e : seg) {
        // ll = max(ll - k, e.first);
        // rr = min(rr + k, e.second);
        llimit=llimit-k;
        rlimit=rlimit+k;
        int l=e.first;
        int r=e.second;
        if(llimit>r || rlimit< l ){
            return false;
        }
            llimit=max(llimit,l);
            rlimit=min(r,rlimit);
       
    }
    return true;
    // int pos=0;
    // for(int i=0;i<seg.size();i++){
    //     int l=seg[i].first;
    //     int r=seg[i].second;
    //     pos=pos+k;
    //     if(pos<l){
    //         return false;
    //     }else{
    //         pos=min(pos,r);
    //     }
    // }
    // return true;
}

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> seg(n);
    for (int i = 0; i < n; ++i) {
        cin >> seg[i].first >> seg[i].second;
    }

    int l = -1, r = 1000000000;
    while (r - l > 1) {
        int mid = (r + l) / 2;
        if (check(seg, mid)) {
            r = mid;
        } else {
            l = mid;
        }
    }
    cout << r << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}