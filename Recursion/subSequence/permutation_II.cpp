#include<bits/stdc++.h>
using namespace std;
void permut(vector<int> &arr, vector<vector<int>> &ans, vector<int> &temp, unordered_map<int, int> &mpp, int n)
{
  if(n == temp.size())
  {
    ans.push_back(temp);
    return;
  }
  for(auto &it : mpp)
  { //do
    if(it.second == 0)
      continue;
    it.second--;
    temp.push_back(it.first);
    //explore
    permut(arr, ans, temp, mpp, n);
    //undo
    it.second++;
    temp.pop_back();
  }
}
int main()
{
  vector<int> arr = {1, 1, 2};
  vector<vector<int>> ans;
  vector<int> temp; 
  unordered_map<int, int> mpp;
  for(auto i: arr)
  {
    mpp[i]++;
  }
  permut(arr,ans, temp, mpp, arr.size());
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