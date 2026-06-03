#include<bits/stdc++.h>
using namespace std;

int findElement(vector<int> &nums, int x)
{
  int n = nums.size();
  int low = 0; 
  int high = n-1;
  while(low<=high)
  {
    int mid = low + (high-low)/2;
    if(nums[mid]==x)
    return mid;
    if(nums[low]<=nums[mid])
    {
      if(nums[low]<=x && x<=nums[mid])
      high = mid-1;
      else 
      low = mid +1;
    }
    else{
      if(nums[mid]<=x && x<=nums[high])
      low = mid +1;
      else
      high = mid -1;
    }
  }
  return -1;
}
int main()
{
  vector<int> arr = {11, 12, 15, 19, 25, 1, 2, 3, 5};
  int target = 11;
  cout<<findElement(arr, target)<<endl;
  return 0;
}