#include<bits/stdc++.h>
using namespace std;
// brute force
vector<int> findLeaders(vector<int> &arr , int n)
{
  vector<int> Leader;
  for(int i=0; i<n; i++)
  {
    int flag = 1;
    for(int j=i+1; j<n; j++)
    {
      if(arr[i]<arr[j])
      {
        flag = 0;
        break;
      }
    }
    if(flag)
      {
        Leader.push_back(arr[i]);
      }
  }
  
  return Leader;
}

int main()
{
  vector<int> arr = {10, 22, 12, 3, 0, 6};
  int n = arr.size();
  vector<int> ans = findLeaders(arr, n);

  for(int i=0; i<ans.size(); i++)
  {
    cout<< ans[i]<<" ";
  }
  return 0;
}