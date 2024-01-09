#include <bits/stdc++.h>
using namespace std;

void solve(){
  string s;
  cin>>s;
  unordered_map<char,int>mp;
  mp['a']=1;
  mp['b']=2;
  mp['c']=3;
  mp['d']=4;
  mp['e']=5;
  mp['f']=6;
  mp['g']=7;
  mp['h']=8;
  mp['i']=9;
  mp['j']=10;
  mp['k']=11;
  mp['l']=12;
  mp['m']=13;
  mp['n']=14;
  mp['o']=15;
  mp['p']=16;
  mp['q']=17;
  mp['r']=18;
  mp['s']=19;mp['t']=20;mp['u']=21;mp['v']=22;mp['w']=23;mp['x']=24;mp['y']=25;mp['z']=26;
  char first=s[0];char second=s[1];
  int ans=(mp[first]-1)*25;
  if(second<first){
     ans=ans+mp[second];
  }else{
    ans=ans+mp[second]-1;

  }
  cout<<ans<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}