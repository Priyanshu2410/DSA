void dfs(vector<int> adj[],int node,int vis[],vector<int> &v)
{
    v.push_back(node);
    vis[node]=1;
    for(auto &it:adj[node])
    {
        if(vis[it]!=1)
            dfs(adj,it,vis,v);
    }
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    vector<int> adj[V];
    for(auto &it:edges)
    {
        adj[it[0]].push_back(it[1]);
        adj[it[1]].push_back(it[0]);
    }
    int vis[V]={0};
    vector<vector<int>> ans;
    for(int i=0;i<V;i++)
    {
        if(vis[i]!=1)
        {
            vector<int> v;
            dfs(adj,i,vis,v);
            ans.push_back(v);
        }
    }
    return ans;
}