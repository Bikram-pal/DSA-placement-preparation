#include<bits/stdc++.h>
using namespace std;

int findSumEqualsK_optimal( vector<int> &arr, int n, int k)
{
  int sum = 0;
  int count = 0;
  map<int, int> mpp;
  mpp[0] = 1;
  for(int i=0; i<n; i++)
  {
    sum += arr[i];
    if(mpp.find(sum -k)!=mpp.end())
    {
      count+=mpp[sum-k];
    }
    mpp[sum]++;
  }
  return count;
}
int main()
{
  vector<int> arr = {1,1,1};
  cout<< findSumEqualsK_optimal(arr, arr.size(), 2);
}