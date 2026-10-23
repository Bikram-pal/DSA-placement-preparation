#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> createUnorderedGraph(vector<pair<int,int>> &edges, int &V)
{
  vector<vector<int>> adj(V);
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

int main()
{
  int v = 5; // no. of nodes;
  vector<pair<int,int>> edges = {{0,1}, {1,3}, {3,2}, {3,4}, {2, 4}, {0,2}};

  vector<vector<int>> adj = createUnorderedGraph(edges, v);
  for(int i=0; i<adj.size(); i++)
  {
    cout<<i<<": ";
    for(int j =0; j<adj[i].size(); j++)
    {
      cout<< adj[i][j]<<" ";
    }
    cout<<"\n";
  }
  return 0;

}