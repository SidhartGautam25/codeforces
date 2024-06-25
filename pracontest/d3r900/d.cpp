#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX

// for geometry
// https://victorlecomte.com/cp-geo.pdf




void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
   // cout<<"s is "<<s<<endl;
    vector<int>l(k);
    vector<int>r(k);
    for(int i=0;i<k;i++){
        int t;
        cin>>t;
        t--;
        l[i]=t;
    }
    for(int  i=0;i<k;i++){
        int t;
        cin>>t;
        t--;
        r[i]=t;
    }
    int q;
    cin>>q;
    vector<int>queries(q);
    map<int,int>count;
    for(int i=0;i<q;i++){
        cin>>queries[i];
        count[queries[i]-1]++;
    }
    string output="";
    for(int i=0;i<k;i++){
        string temp=s.substr(l[i],r[i]-l[i]+1);
        //cout<<"temp is "<<temp<<endl;
        //cout<<"l[i] is "<<l[i]<<"  r[i]  "<<r[i]<<endl;
        int left=l[i];
        int right=r[i];
        int changes=0;

        for(int j=left;j<=(left+right)/2;j++){
            changes=changes+(count[j]+count[left+right-j]);
            if(changes%2==1){
                swap(temp[j-left], temp[right-j]);
            }
        }
        output=output+temp;

    }

    cout<<output<<endl;
   
    
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