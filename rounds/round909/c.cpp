#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

ll maxSubArray(vector<ll>&arr, int left, int right){
    ll max = LLONG_MIN, max_ending = 0;
    for(int i=left; i<=right; i++){
        max_ending = max_ending + arr[i]; 
        if(max < max_ending) {
            max = max_ending;
        }
        if(max_ending < 0){
            max_ending = 0;
        }
    }
    return max;
}
 
void solve(){
   
    int n;
    cin>>n;
    vector<ll> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int prev = 0;
    ll ans = LLONG_MIN;
    for(int i=1; i<n; i++){
        if((abs(arr[i])%2) == (abs(arr[i-1])%2)){
            ans = max(ans, maxSubArray(arr, prev, i-1));
            prev = i;
        }
    }
    ans = max(ans, maxSubArray(arr, prev, n-1));
    cout << ans << endl;
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}