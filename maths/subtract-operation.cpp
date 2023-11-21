#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    unordered_set<int>ms;
    for(int i=0;i<n;i++){
        cin>>v[i];
        //ms.insert(arr[i]);
    }
   
   
   bool ans = false;
    	if(n == 1) ans = (v[0] == k);
    	else {
    		sort(v.begin(), v.end());
    		int i = 0;
    		int j = 1;
    		while(j < n and i < n) {
    			if(v[i] + abs(k) == v[j]) {
    				ans = true;
    				break;
    			}
    			else if(v[i] + abs(k) < v[j]) ++i;
    			else ++j;
    		}
    	}
    	if(ans){
            cout<<"YES"<<endl;
            return;
        } 
        cout<<"NO"<<endl;
 
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