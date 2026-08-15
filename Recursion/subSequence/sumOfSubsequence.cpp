#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> &arr, vector<int> &ans, int n, int i, int &temp)
{
  if(i==n)
  {
    ans.push_back(temp);
    return;
  }
  temp += arr[i];
  solve(arr, ans, n, i+1, temp);
  temp -=arr[i];
  solve(arr, ans, n, i+1, temp);
  
}
vector<int>sumOfSubsequence(vector<int> &arr)
{
  int i;
  int temp =0;
  vector<int> ans;
  int n = arr.size();
  solve(arr, ans, n, 0, temp);
  return ans;
}
int main()
{
  vector<int> arr = {1, 2, 3};
  
  vector<int> ans = sumOfSubsequence(arr);
  for(auto i : ans)
  {
    cout<<i<<" ";
  }
  return 0;
}