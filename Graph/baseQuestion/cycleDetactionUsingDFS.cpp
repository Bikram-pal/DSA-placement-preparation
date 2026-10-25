#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> adjList(vector<pair<int, int>>&edges, int v)
{
  vector<vector<int>> adj(v);
  int n = edges.size();
  for(int i=0; i<n; i++)
  {
    pair<int, int> edge = edges[i];
    int u = edge.first;
    int v= edge.second;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  return adj;
}

void DFS(vector<vector<int>> &adj, vector<int> &vis, int node, int parent, bool &flag)
{
  vis[node] = 1;
  for(int i=0; i<adj[node].size(); i++)
  {
    int neigh = adj[node][i];
    if(!vis[neigh])
    DFS(adj, vis, neigh, node, flag);
    else if(vis[neigh] && neigh != parent)
    {
      flag = 1;
      return;
    }
  }
}

bool cycledetaction(vector<pair<int, int>> &edges, int v)
{
  vector<vector<int>> adj = adjList(edges, v);
  bool flag = 0;
  vector<int>vis(v, 0);
  DFS(adj, vis, 0, -1, flag);
  if(flag == 1)
  return flag;
  for(int i=0; i<v; i++)
  {
    if(vis[i] == 0)
    DFS(adj, vis, i, -1, flag);
  }
  return flag;

}
int main()
{
  int v = 6;
  vector<pair<int,int>> edges = {
    {0,1},
    {0,2},
    {1,2},
    {3,4},
    {3,5}
  };
  cout<< (cycledetaction(edges, v));

}