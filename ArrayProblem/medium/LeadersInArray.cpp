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

// optimal
vector<int> findLeaders_optimal(vector<int> &arr, int n)
{
  vector<int> ans ;
  int maxi = INT_MIN;
  for(int i=n-1; i>=0; i--)
  {
    if(arr[i]>maxi)
    {
      ans.push_back(arr[i]);
      maxi = arr[i];
    }
  }
  return ans;
}

int main()
{
  vector<int> arr = {10, 22, 12, 3, 0, 6};
  int n = arr.size();
  // vector<int> ans = findLeaders(arr, n);
  vector<int> ans = findLeaders_optimal(arr, n);

  for(int i=0; i<ans.size(); i++)
  {
    cout<< ans[i]<<" ";
  }
  return 0;
}