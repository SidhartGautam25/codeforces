#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int dfs(vector<vector<int>>&tree,int node,vector<bool>&vis,vector<int>&dp){
    if(vis[node]){
        return 0;
    }
    vis[node]=true;
    if(node != 1 and (tree[node].size()==1)){
        //cout<<"in dfs,node "<<node<<" has 0 childs"<<endl;
        dp[node]=0;
        return 1;
    }
    int total=0;
    for(int i=0;i<tree[node].size();i++){
        int curr=tree[node][i];
        if(vis[curr] == false){
            int temp=dfs(tree,curr,vis,dp);
            //cout<<"node "<<node<<" is calling for child "<<curr<<endl;
            //cout<<"innn dfss, node "<<curr<<" has "<<temp<<" childs"<<endl;
            total=total+temp;
            
        }
        
    }
    dp[node]=total;
    return total+1;
}

void savedfs(vector<vector<int>>&tree,int node,vector<bool>&vis,vector<int>&dp,vector<int>&saved){
    if(vis[node]){
        return;
    }
    vis[node]=true;
    if(tree[node].size()==1 and ( node != 1)){
        return;
    }else if(tree[node].size()==2 and (node != 1)){
        saved[0]=saved[0]+(dp[node]-1);
        return;
    }else if(node==1){
        if(tree[node].size()==1){
            saved[0]=saved[0]+(dp[node]-1);
            return;
        }else if(tree[node].size()==2){
            //cout<<"here "<<endl;
            // int left=tree[node][0];
            // int right=tree[node][1];
            // if(dp[left]>dp[right]){
            //     saved[0]=saved[0]+(dp[left]);
            //     savedfs(tree,right,vis,dp,saved);
            // }else if(dp[right]>dp[left]){
            //     saved[0]=saved[0]+(dp[right]);
            //     savedfs(tree,left,vis,dp,saved);
            // }else{
                //cout<<"confused "<<endl;
                vector<int>ifleftsaved(1,0);
                vector<int>ifrightsaved(1,0);
                
                savedfs(tree,left,vis,dp,ifrightsaved);
                savedfs(tree,right,vis,dp,ifleftsaved);
                //cout<<"left is "<<left<<" and right is "<<right<<endl;
                //cout<<"if left saved, we can save "<<ifleftsaved[0]<<endl;
                //cout<<" if right saved,we can save "<<ifrightsaved[0]<<endl;
                int option1=dp[left]+ifleftsaved[0];
                // cout<<" if left save is done"<<endl;
                // cout<<"we can save "<<dp[left]<<" "<<ifleftsaved[0]<<endl;
                // cout<<" if right save is done "<<endl;
                // cout<<"we can save "<<dp[right]<<" "<<ifrightsaved[0]<<endl;
                int option2=dp[right]+ifrightsaved[0];
                
                saved[0]=saved[0]+max(option1,option2);
                return;
            //}
        }
    }else{
        int left,right;
        int f=tree[node][0];
        int s=tree[node][1];
        int t=tree[node][2];
        if(vis[f]){
            left=s;
            right=t;
        }else if(vis[s]){
            left=f;
            right=t;
        }else{
            left=f;
            right=s;
        }
        //  if(dp[left]>dp[right]){
        //     //  cout<<"for node "<<node<<" and left "<<left<<" and right "<<right<<endl;
        //         saved[0]=saved[0]+(dp[left]);
        //         // cout<<"and here we saved "<<(dp[left]-1)<<endl;
        //         savedfs(tree,right,vis,dp,saved);
        //     }else if(dp[right]>dp[left]){
        //         //cout<<"for my node "<<node<<" and right "<<right<<" and left "<<left<<endl;
        //         saved[0]=saved[0]+(dp[right]);
        //         savedfs(tree,left,vis,dp,saved);
        //     }else{
                //cout<<"again confused for "<<node<<endl;
                vector<int>ifleftsaved(1,0);
                vector<int>ifrightsaved(1,0);
                savedfs(tree,left,vis,dp,ifrightsaved);
                savedfs(tree,right,vis,dp,ifleftsaved);
                // cout<<"so saved "<<left<<" and saved "<<
                // saved[0]=saved[0]+max(ifleftsaved[0],ifrightsaved[0]);
                //cout<<"oo,left is "<<left<<endl;
                 int option1=dp[left]+ifleftsaved[0];
                 //cout<<"and saved is dp[left] "<<dp[left]<<" and "<<ifleftsaved[0]<<endl;
                 //cout<<"option1 is "<<option1<<endl;
                int option2=dp[right]+ifrightsaved[0];
                saved[0]=saved[0]+max(option1,option2);
                return;
            //}
    }
}





void solve()
{
    int n;
    cin>>n;
    vector<vector<int>>tree(n+1);
    for(int i=1;i<n;i++){
        int a,b;
        cin>>a>>b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    vector<int>dp(n+1,0);
    vector<bool>vis1(n+1,false);
    int node=1;
   dfs(tree,node,vis1,dp); 
//   for(int i=1;i<=n;i++){
//       cout<<"for node "<<i<<" it has "<<dp[i]<<endl;
//   }
    vector<int>saved(1,0);
    vector<bool>vis(n+1,false);
    savedfs(tree,node,vis,dp,saved);
    cout<<saved[0]<<endl;


   

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}
