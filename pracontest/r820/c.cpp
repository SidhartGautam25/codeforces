#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX



void solve(){
    string s;
    cin>>s;
    int n=s.size();
    char first=s[0];
    int f=first-'a';
    char last=s[n-1];
    int l=last-'a';
    int ff=min(f,l);
    int lll=max(f,l);
    // cout<<"f is "<<ff<<" and l is "<<lll<<endl;
    vector<pair<char,int>>steps;
    // steps.push_back(1);
    // int count=1;
    for(int i=1;i<n-1;i++){
        char c=s[i];
        int t=c-'a';
        if(t>=ff && t<=lll){
            // count++;
            steps.push_back(make_pair(c,i+1));
        }

    }
    // steps.push_back(n);
    int ans=lll-ff;
    sort(steps.begin(),steps.end());
    if(f>l){
        reverse(steps.begin(),steps.end());
    }
    int count=steps.size()+2;
    cout<<ans<<"  "<<count<<endl;
    cout<<"1 ";
    for(int i=0;i<steps.size();i++){
        cout<<steps[i].second<<"  ";
    }
    cout<<n;
    cout<<endl;
    
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