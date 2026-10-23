#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> makingAdjList(vector<pair<int,int>> &edges, int v)
{
  vector<vector<int>> adj(v);
  for(int i=0; i<edges.size(); i++)
  {
    pair<int,int> edge = edges[i];
    int u = edge.first;
    int v = edge.second;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  return adj;
}
// DFS -> deep drive of a single node then return back after visit all neighboors
void DFS(vector<vector<int>> &adj, vector<int> &res, int node, vector<bool> &vis)
{
  res.push_back(node);
  vis[node] = 1;
  for(int i=0; i<adj[node].size(); i++)
  {
    int neigh = adj[node][i];
    if(!vis[neigh])
    {
      DFS(adj, res, neigh, vis);
    }
  }
}
// print the adj list
void printAdjList(vector<vector<int>>& adj)
{
  for(int i=0; i<adj.size(); i++)
  {
    cout<<i<<": ";
    for(int j =0; j<adj[i].size(); j++)
    {
      cout<<adj[i][j]<<" ";
    }
    cout<<"\n";
  }
}

// print dfs
void printDFS(vector<int> &res)
{
  for(int i=0; i<res.size(); i++)
  {
    cout<<res[i]<<" ";
  }
}

int main()
{
  // given no. of node and the edges
  int v = 5;
  vector<pair<int, int>> edges = {{0, 2}, {0, 3}, {0, 1}, {2, 4}};
  vector<vector<int>> adj = makingAdjList(edges,v);
  vector<bool> vis(v,0);
  vector<int> res;
  printAdjList(adj);
  cout<<endl;
  DFS(adj, res, 0, vis);
  printDFS(res);


}