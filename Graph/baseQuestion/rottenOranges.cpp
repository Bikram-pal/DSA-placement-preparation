#include<bits/stdc++.h>
using namespace std;
int x[4] = {-1, 1, 0, 0};
int y[4] = {0, 0, -1, 1};

// valid 
bool isValid(int i, int j, int n, int m)
{
  if(i<n && j<m && i>=0 && j>=0)
  return 1;
  return 0;
}
// count fresh orange 
// push rotten orange in queue

void findrottenAndFresh(vector<vector<int>> &a, queue<pair<int,int>> &q, int &fresh)
{
  for(int i=0; i<a.size(); i++)
  {
    for(int j=0; j<a[0].size(); j++)
    {
      if(a[i][j] == 2)
      {
        q.push({i,j});
        a[i][j] == -2;
      }
      else if(a[i][j] == 1)
      fresh++;
    }
  }
}

int oragesRotting(vector<vector<int>> &a)
{
  int time = 0;
  int fresh = 0;
  int n = a.size();
  int m = a[0].size();
  queue<pair<int, int>> q;
  findrottenAndFresh(a, q, fresh);
  while(!q.empty() && fresh>0)
  {
    time++;
    int s = q.size();
    while(s--)
    {
      pair<int, int> rotten = q.front();
      q.pop();
      int i = rotten.first;
      int j = rotten.second;
      a[i][j] = 0;
      for(int k =0; k<4; k++)
      {
        int row = i+ x[k];
        int col = j +y[k];
        if(isValid(row, col, n, m) && a[row][col] == 1)
        {
          q.push({row, col});
          a[row][col] = -2;
          fresh--;
        }
      }
    }
  }

  if(fresh>0)
  {
    return -1;
  }
  return time;
}
int main()
{
  vector<vector<int>> a = {
    {2, 1, 1},
    {1, 1, 0},
    {0, 1, 1}
  };
  cout<< oragesRotting(a);
  
}