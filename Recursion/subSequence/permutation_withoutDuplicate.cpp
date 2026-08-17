#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> &arr, vector<vector<int>> &ans, vector<int> &temp, vector<bool> &visited, int n)
{
  if(temp.size()==n)
  {
    ans.push_back(temp);
    return;
  }
  for(int i=0; i<visited.size(); i++)
  {
    if(!visited[i])
    {
      visited[i]=1;
      temp.push_back(arr[i]);
      solve(arr, ans, temp, visited, n);
      visited[i]=0;
      temp.pop_back();
    }
  }
}
int main()
{
  vector<int> arr = {1,2,3};
  vector<vector<int>> ans;
  vector<int> temp;
  vector<bool> visited(arr.size(), 0);
  solve(arr, ans, temp, visited, arr.size());
  for(int i=0; i<ans.size(); i++)
  {
    for(int j=0; j<ans[i].size(); j++)
    {
      cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  }
}