#include<bits/stdc++.h>
using namespace std;
void subSeq(vector<int> &arr, int i, int n, vector<vector<int>> &ans, vector<int> temp)
{
  // base case
  if(i==n)
  {
    ans.push_back(temp);
    return;
  }
  subSeq(arr, i+1, n, ans, temp);
  temp.push_back(arr[i]);
  subSeq(arr, i+1, n, ans, temp);
}
int main()
{
  vector<int> arr = {1, 2, 3};
  vector<vector<int>> ans;
  vector<int> temp;
  subSeq(arr,0, arr.size(),ans, temp);
  for(int i=0; i<ans.size(); i++)
  {
    for(int j=0; j<ans[i].size(); j++)
    {
      cout<<ans[i][j]<<" ";
    }
  }
}