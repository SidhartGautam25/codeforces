#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mod LLONG_MAX

 
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>init(n);
    for(int i=0;i<n;i++){
        cin>>init[i];
    }
    vector<int>dest(n);
    for(int i=0;i<n;i++){
        cin>>dest[i];
    }
    vector<int>paint(n+1,0);
    vector<vector<int>>p(n+1);
    vector<int>ans(m);
     int ind=-1;
    for(int i=0;i<m;i++){
        int t;
        cin>>t;
        paint[t]++;
        p[t].push_back(i);
    }
    for(int i=0;i<n;i++){
        if(dest[i] != init[i]){
            if(paint[dest[i]]>0){
                paint[dest[i]]--;
                ans[p[dest[i]].back()]=i+1;
                ind=max(ind,p[dest[i]].back());
                p[dest[i]].pop_back();
            }else{
                cout<<"NO"<<endl;
                return;
            }
        }
    }
   
    for(int i=0;i<n;i++){
        if(paint[dest[i]]>0){
            paint[dest[i]]=0;
            
            while(p[dest[i]].size()>0){
                ans[p[dest[i]].back()]=i+1;
                ind=max(ind,p[dest[i]].back());
                p[dest[i]].pop_back();

            }
        }
    }
    for(int i=1;i<=n;i++){
        if(paint[i] != 0){
            while(paint[i]>0){
                if(p[i].back()<ind){
                    ans[p[i].back()]=ans[ind];
                    p[i].pop_back();
                    paint[i]--;
                   
                }else{
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<m;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;


   
}
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    
    cin>>t;
    while(t--){
       // cout<<"t "<<t<<endl;
        solve();
     }
 
    return 0;
}