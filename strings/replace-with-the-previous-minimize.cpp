#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007



void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int i=0;
    char t;
    vector<pair<char,char>>ranges;
    while(i<n){
        //cout<<"for i "<<i<<" ranges size is "<<ranges.size()<<endl;
        //cout<<"i "<<i<<endl;
        char c=s[i];
       if(c=='a'){
           i++;
        continue;
       }else if(ranges.size()>0){
        if(c<=ranges[0].first){
            i++;
            continue;
        }
        int j=0;
        //cout<<"c "<<c<<" ranges first "<<ranges[j].first<<endl;
        while(j<ranges.size() and c>ranges[j].first){
            //cout<<"j "<<j<<endl;
            j++;
        }
        j=j-1;
        //cout<<"for i "<<i<<" j is "<<j<<" and c "<<c<<endl;
        if(c>=ranges[j].first and c<=ranges[j].second){
            //cout<<"for i "<<i<<endl;
             c=ranges[j].first;
             s[i]=c;

        }else{
            if(k==0){
               // cout<<"iii "<<i<<endl;
                i++;
                continue;
            }else{
                int d=c-ranges[j].second;
                int ad=min(d,k);
                if(c-ad<=ranges[j].second){
                   // cout<<"iifbgv "<<i<<endl;
                    c=ranges[j].first;
                    ranges[j].second=max(c+ad,ranges[j].second);
                    s[i]=c;
                }else{
                   // cout<<"dh "<<i<<endl;
                    c=c-ad;
                    s[i]=c;
                    pair<char,char>p;
                    p.first=c;
                    p.second=c+ad;
                    ranges.push_back(p);
                }
                k=k-ad;
            }
        }


       }else{
         int d=c-'a';
         int ad=min(d,k);
         c=c-ad;
         k=k-ad;
         s[i]=c;
         pair<char,char>r;
         r.first=c;
         r.second=c+ad;
         ranges.push_back(r);

       }
        


        i++;
    }
    cout<<s<<endl;
    // vector<int>arr(n);
    // for(int i=0;i<n;i++){
    //     char c=s[i];
    //     arr[i]=c-'a';
    // }
    // int op;
    // char f=s[0];
    // op=f-'a';
    // int mmax=arr[0];
    // for(int i=0;i<n;i++){
    //    if(k<=(f-'a')){
    //        if(i==0){
    //          s[i]=s[i]-k;
    //        }else{
    //          if(s[i]<=f and s[i]>s[0]){
    //             s[i]=s[0];
    //          }
    //        }
    //    }else{
         
    //       if(i==0){
    //          s[0]='a';
    //       }else{
    //          int used=f-s[0];
    //          int rem=k-used;
    //          if(s[i]<=f){
    //             s[i]='a';
    //          }else if(rem>=(s[i]-f)){
    //             s[i]='a';
    //          }
    //       }

    //    }


    // }
    
   
 
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