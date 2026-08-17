#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> &arr, vector<vector<int>> &ans, int n, int i, int &target, vector<int> &temp)
{
  if(target==0)
  {
    ans.push_back(temp);
    return;
  }
  
  if(i==n)
  {
    return;
  }
  if(target<0)
  {
    return;
  }
  
  temp.push_back(arr[i]);
  target = target-arr[i];
  solve(arr, ans, n, i+1, target, temp);
  target = target+arr[i];
  temp.pop_back();
  solve(arr, ans, n, i+1, target, temp);
}
int main()
{
  vector<int> arr = {1, 2, 2, 1};
  vector<vector<int>> ans ;
  int target = 2;
  vector<int> temp;
  solve(arr, ans, arr.size(), 0, target, temp);
  for(int i=0; i<ans.size(); i++)
  {
    for(int j=0; j<ans[i].size(); j++)
    {
      cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}