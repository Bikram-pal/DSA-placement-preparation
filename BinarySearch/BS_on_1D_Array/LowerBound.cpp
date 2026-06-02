#include<bits/stdc++.h>
using namespace std;

// lower bound
// target<=arr[i]
int bsOnLowerBound( vector<int> &arr, int low, int high, int target, int ans)
{
  if(low>high) return ans;
  int mid = low + (high - low)/2;
  
  if(arr[mid]>=target)
  {
    return bsOnLowerBound(arr, low, mid-1, target, mid);
  }
  else
  {
    return bsOnLowerBound(arr, mid+1, high, target, ans);
  }
}

int main()
{
  vector<int> arr = {1, 2, 3, 5, 10, 11, 12, 15, 19, 25};
  int n = arr.size();
  int target = 4;
  int low = 0; 
  int high = n-1;
  int ans = n;
  cout<<bsOnLowerBound(arr, low, high, target, ans);
}