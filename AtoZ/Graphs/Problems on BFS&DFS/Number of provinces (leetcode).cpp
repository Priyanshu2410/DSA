class Solution {
public:
     void dfs(vector<int> &vis, vector<int> adj[],int i){
          vis[i]=1;
          for(auto it:adj[i]){
              if(vis[it]==0){
                  dfs(vis,adj,it);
              }
          }
     }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int> adj[n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(isConnected[i][j]==1 && i!=j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        vector<int> vis(n,0);
        int cnt=0;
        for(int i=0; i<n; i++){
            if(vis[i]==0){
                cnt++;
                dfs(vis,adj,i);
            }
        }
        return cnt;
    }
};