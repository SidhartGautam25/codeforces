#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int size;
    cin>>size;
    string s,str;
    cin>>s;
    //cout<<"string is "<<s<<endl;
    str=s;
    char c=s[0];
     vector<int>ans;
    if(c=='9'){
        int n=s.size();
        vector<int>temp;
        vector<int>curr;
       
        curr.push_back(0);
        for(int i=0;i<n;i++){
            char c=s[i];
            string cc(1,c);
            int d=stoi(cc);
            curr.push_back(d);

        }
        for(int i=0;i<=n;i++){
            temp.push_back(1);
        }
        for(int i=n;i>=0;i--){
            if(temp[i]<curr[i]){
                temp[i]=temp[i]+10;
                temp[i-1]=temp[i-1]-1;
                ans.push_back(temp[i]-curr[i]);

            }else{
                ans.push_back(temp[i]-curr[i]);
            }
        }
        ans.pop_back();
        reverse(ans.begin(),ans.end());
        //cout<<"here and ans size is "<<ans.size()<<endl;

    }else{
        int n=s.size();
       
        for(int i=0;i<n;i++){
            char c=s[i];
            string cc(1, c);
            int d=stoi(cc);
            int t=9-d;
            ans.push_back(t);
            


        }
     

        

    }
      // cout<<"ans is ";
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
        }
        cout<<endl;
        return;


 
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