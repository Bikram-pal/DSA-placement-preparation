#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> makingAdjList(vector<pair<int, int>> &edges, int v)
{
  vector<vector<int>> adj(v);
  for(int i=0; i<edges.size(); i++)
  {
    pair<int, int> edge = edges[i];
    int u = edge.first;
    int v= edge.second;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  return adj;
}

void BFS(vector<vector<int>> &adj, vector<int> &res, vector<bool> &vis)
{
  queue<int> q;
  q.push(0);
  vis[0] = 1;
  res.push_back(0);
  
  while (!q.empty())
  {
    int curr = q.front();
    q.pop();
    
    for(int i=0; i<adj[curr].size(); i++)
    {
      int neigh = adj[curr][i];
      if(vis[neigh] == 0)
      {
        res.push_back(neigh);
        vis[neigh] = 1;
        q.push(neigh);
      }
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


// print bfs
void printBFS(vector<int> &res)
{
  for(int i=0; i<res.size(); i++)
  {
    cout<<res[i]<<" ";
  }
  cout<<endl;
}

int main()
{
  int v = 5;
  vector<pair<int, int>> edges = {{0, 2}, {0, 3}, {0, 1}, {2, 4}};
  vector<vector<int>> adj = makingAdjList(edges,v);
  printAdjList(adj);
  cout<<endl;
  vector<bool> vis(v,0);
  vector<int> res;
  BFS(adj, res, vis);
  printBFS(res);
  
  
}