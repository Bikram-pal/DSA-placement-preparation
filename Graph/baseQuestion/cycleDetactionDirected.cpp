#include<bits/stdc++.h>
using namespace std;
bool flag = 0;
void DFS(vector<vector<int>> &adj, vector<bool> &vis, vector<bool> &path, int node)
{
  vis[node] = 1;
  path[node] = 1;
  for(int i=0; i<adj[node].size(); i++)
  {
    int neigh = adj[node][i];
    
    if(!vis[neigh])
    {
      DFS(adj, vis, path, neigh);
    }
    else if(vis[neigh] && path[neigh])
    {
      flag = 1;
      return;
    }
  }
  path[node] = 0;
  return;
}
vector<vector<int>> AdjList(vector<vector<int>> &edges, int v)
{
  vector<vector<int>> adj(v);
  for(int i=0; i<edges.size(); i++)
  {
    int u = edges[i][0];
    int v = edges[i][1];
    adj[u].push_back(v);
  }

  return adj;
}
bool cycleDetact(vector<vector<int>> &edges, int v)
{
  vector<vector<int>> adj = AdjList(edges,v);
  vector<bool> vis(v, 0);
  vector<bool> path(v, 0);
  for(int i=0; i<adj.size(); i++)
  {
    if(vis[i] == 0)
    DFS(adj, vis, path, i);
  }

  return flag;
  
}
int main()
{
  vector<vector<int>> edges = {
    {0, 1}, 
    {1, 2},
    {2, 0}
  };
  int v = 3;
  cout<<cycleDetact(edges, v);
}