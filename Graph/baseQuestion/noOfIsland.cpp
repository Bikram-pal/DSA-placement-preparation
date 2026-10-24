#include<bits/stdc++.h>
using namespace std;

int x[4] = {-1, 1, 0, 0};
int y[4] = {0, 0, -1, 1};
bool isValid(int i, int j, int n, int m)
{
  if(i<n && i>=0 && j<m && j>=0)
  return true;
  return false;
}

void DFS(vector<vector<char>> &a, vector<vector<bool>> &vis, int i, int j, int n, int m)
{
  vis[i][j] = 1;
  for(int k=0; k<4; k++)
  {
    int row = i + x[k];
    int col = j + y[k];
    if(isValid(row, col, n, m) && vis[row][col] == 0 && a[row][col] == 'I')
    {
      DFS(a, vis, row, col, n, m);
    }
  } 
}

int findNoOfIsland(vector<vector<char>> &a)
{
  int res = 0;
  int n = a.size();
  int m = a[0].size();
  vector<vector<bool>> vis(n);
  for(int i=0; i<vis.size(); i++)
  {
    vector<bool> t(m,0);
    vis[i] = t;
  }

  for(int i=0; i <n; i++)
  {
    for(int j= 0; j<m; j++)
    {
      if(a[i][j] == 'I' && vis[i][j] == 0)
      {
        DFS(a, vis, i, j, n, m);
        res++;
      }
    }
  }
  return res;
  

}
int main()
{
  vector<vector<char>> a = {
    {'O', 'I', 'O', 'O', 'O'},
    {'I', 'I', 'O', 'O', 'O'},
    {'O', 'O', 'I', 'O', 'O'},
    {'O', 'O', 'O', 'I', 'I'}
  };
  cout<<"no of island: " <<findNoOfIsland(a)<<endl;

}