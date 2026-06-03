#include<bits/stdc++.h>
using namespace std;
int FindFloor(vector<int> &arr, int target)
{
  int n = arr.size();
  int low = 0;
  int high = n -1;
  int ans = -1;
  while(low<=high)
  {
    int mid = low + (high-low)/2;
    if(arr[mid]<=target)
    {
      ans = arr[mid];
      low = mid +1;
    }
    else
    {
      high = mid - 1;
    }
  }
  return ans;
}
int FindCeil(vector<int> &arr, int target)
{
  auto it = lower_bound(arr.begin(), arr.end(), target);
  if(it==arr.end())
  return -1;
  int lb = it - arr.begin();
  return arr[lb];
}
int main()
{
  vector<int> arr = {1, 2, 3, 5, 10, 11, 12, 15, 19, 25};
  int target = 21;
  cout<<"Floor: "<<FindFloor(arr, target)<<"\n";
  cout<<"Ceil: "<<FindCeil(arr, target)<<"\n";
}