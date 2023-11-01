#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n,x;
    cin>>n>>x;
    vector<int>arr(n);
    int mmin=INT_MAX;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr[i]=temp;
        mmin=min(mmin,temp);
    }
    long long lo = 0, hi = mmin+x;
	while (lo < hi) {
		long long mid = lo + (hi - lo + 1) / 2;
		long long tot = 0;
		for (int i = 0; i < n; i++) {
		    if(mid>=arr[i]){
		        tot=tot+(mid-arr[i]);
		    }
			
		}
		if (tot <= x) {lo = mid;} 
		else {hi = mid - 1;}
	}
	cout << lo << endl;
 
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