#include <bits/stdc++.h>
using namespace std;

void solve(){
  vector<vector<char>>arr(3,vector<char>(3));
  for(int i=0;i<3;i++){
    string temp;
    cin>>temp;
    for(int j=0;j<3;j++){
        arr[i][j]=temp[j];
    }
  }
  //first row
  if(arr[0][0]==arr[0][2] and arr[0][2]==arr[0][1] and arr[0][0] != '.'){
    cout<<arr[0][0]<<endl;
    //cout<<"one"<<endl;
  }
  //second row
  else if(arr[1][0]==arr[1][1] and arr[1][1]==arr[1][2] and arr[1][0] != '.'){
    cout<<arr[1][0]<<endl;
    //cout<<"two"<<endl;
  }
  //third row
  else if(arr[2][0]==arr[2][1] and arr[2][1]==arr[2][2] and arr[2][0] != '.'){
    cout<<arr[2][0]<<endl;
    //cout<<"three"<<endl;
  }
  //first column
  else if(arr[0][0]==arr[1][0] and arr[0][0]==arr[2][0] and arr[0][0] != '.'){
    cout<<arr[0][0]<<endl;
    //cout<<"four"<<endl;
  }
  //second column
  else if(arr[0][1]==arr[1][1] and arr[0][1]==arr[2][1] and arr[0][1] != '.'){
    cout<<arr[0][1]<<endl;
    //cout<<"five"<<endl;
  }
  //third column
  else if(arr[0][2]==arr[1][2] and arr[0][2]==arr[2][2] and arr[0][2] != '.'){
    cout<<arr[0][2]<<endl;
    ///cout<<"six"<<endl;
  }
  //first diagonal
  else if(arr[0][0]==arr[1][1] and arr[0][0]==arr[2][2] and arr[0][0] != '.'){
    cout<<arr[0][0]<<endl;
    //cout<<"seven"<<endl;
  }
  //second diagonal
  else if(arr[0][2]==arr[1][1] and arr[0][2]==arr[2][0] and arr[0][2] != '.'){
    cout<<arr[0][2]<<endl;
    //cout<<"eight"<<endl;
  }else{
    cout<<"DRAW"<<endl;
  }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}