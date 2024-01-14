#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

bool comp(const pair<char,pair<int,int>>&a,const pair<char,pair<int,int>>&b){
    return a.second.first>b.second.first;
} 

 vector<pair<int,int>> find_best_three(vector<pair<int,int>>arr){
    vector<pair<int,int>>ans;

    int find,sind,tind;
    int fmax=INT_MIN;
    int smax=INT_MIN;
    int tmax=INT_MIN;



    for(int i=0;i<arr.size();i++){
        if(arr[i].first>fmax){
            int sitemp=sind;
            int fitemp=find;
            find=arr[i].second;
            sind=fitemp;
            tind=sitemp;
            int temp=fmax;
            fmax=arr[i].first;
            int ttemp=smax;
            smax=temp;
            tmax=ttemp;
        }else if(arr[i].first>smax){
            int sitemp=sind;
            sind=arr[i].second;
            tind=sitemp;
            int temp=smax;
            smax=arr[i].first;
            tmax=temp;
        }else if(arr[i].first>tmax){
            tind=arr[i].second;
            tmax=arr[i].first;
        }
    }
    ans.push_back(make_pair(fmax,find));
    ans.push_back(make_pair(smax,sind));
    ans.push_back(make_pair(tmax,tind));
    return ans;

   

}


void solve(){
  int n;
  cin>>n;
  vector<pair<int,int>>a(n);
  vector<pair<int,int>>b(n);
  vector<pair<int,int>>c(n);
  for(int i=0;i<n;i++){
    int val;
    cin>>val;
    a[i]=make_pair(val,i);

  }
  for(int i=0;i<n;i++){
    int val;
    cin>>val;
    b[i]=make_pair(val,i);
  }
  for(int i=0;i<n;i++){
    int val;
    cin>>val;
    c[i]=make_pair(val,i);
  }
  vector<pair<int,int>>ans1=find_best_three(a);
  vector<pair<int,int>>ans2=find_best_three(b);
  vector<pair<int,int>>ans3=find_best_three(c);
  int total=INT_MIN;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        for(int k=0;k<3;k++){
            if((ans1[i].second != ans2[j].second) && (ans1[i].second != ans3[k].second) && (ans2[j].second != ans3[k].second) ){
                total=max(total,ans1[i].first+ans2[j].first+ans3[k].first);
            }
        }
    }
  }
  cout<<total<<endl;

  
  
  

//   sort(ans.begin(),ans.end(),comp);

//    int total=0;
//     set<char>cset;
//     set<int>indset;
//     total=total+ans[0].second.first;
//     cset.insert(ans[0].first);
//     indset.insert(ans[0].second.second);
//     int count=1;
//     for(int i=1;i<10;i++){
//         if(count==3){
//             break;

//         }else{
//             if((cset.find(ans[i].first)==cset.end()) and (indset.find(ans[i].second.second)==indset.end())){
//                 total=total+ans[i].second.first;
//                 cset.insert(ans[i].first);
//                 indset.insert(ans[i].second.second);
//                 count++;
//             }else{
//                 continue;
//             }
//         }
//     }
//     cout<<total<<endl;









//   sort(a.begin(),a.end(),comp);
//   sort(b.begin(),b.end(),comp);
//   sort(c.begin(),c.end(),comp);




//   vector<pair<int,int>>arr1;
//   vector<pair<int,int>>arr2;
//   vector<pair<int,int>>arr3;


//   arr1.push_back(a[n-1]);
//   arr1.push_back(a[n-2]);
//   arr1.push_back(a[n-3]);

  
//   arr2.push_back(b[n-1]);
//   arr2.push_back(b[n-2]);
//   arr2.push_back(b[n-3]);

  
//   arr3.push_back(c[n-1]);
//   arr3.push_back(c[n-2]);
//   arr3.push_back(c[n-3]);



  
  
 
   
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t>0){
    
        solve();
        t=t-1;
     }

    return 0;
}