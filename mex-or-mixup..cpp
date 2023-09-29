    #include <bits/stdc++.h>
    using namespace std;

int computexor(int n)
{
   
  // If n is a multiple of 4
  if (n % 4 == 0)
    return n;
 
  // If n%4 gives remainder 1
  if (n % 4 == 1)
    return 1;
 
  // If n%4 gives remainder 2
  if (n % 4 == 2)
    return n + 1;
 
  // If n%4 gives remainder 3
  return 0;
}



    void solve(){
    int a,b;
    cin>>a>>b;

    int xxor=computexor(a-1);
    xxor=xxor ^ 0;
    
    int temp= xxor ^ b;
    if(xxor==b){
        cout<<a<<endl;
        return;
    }else if(xxor != b and temp != a){
        cout<<a+1<<endl;
        return;
    }else{
        cout<<a+2<<endl;
        return;
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