#include<bits/stdc++.h>
using namespace std;
int findMin(vector<int> &nums)
{
  int n = nums.size();
  int low = 0;
  int high = n-1;
  int min = INT_MAX;
  while(low<=high)
  {
    int mid = low + (high-low)/2;
    if(nums[low]<=nums[mid])
    {
      if(min>nums[low])
      min = nums[low];
      low = mid +1;
    }
    else
    {
      if(min>nums[mid])
      min = nums[mid];
      high = mid - 1;
    }
  }
  return min;
}
int main()
{
  vector<int> nums = {4,5,6,7,0,1,2};
  cout<< findMin(nums);
  return 0;
}