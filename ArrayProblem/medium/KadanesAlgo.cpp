#include<bits/stdc++.h>
using namespace std;

// using kadanes algo we can solve max subarray sum of a given array
int KadanesAlgo(int arr[], int n)
{
  int MaxSum = INT_MIN;
  int sum = 0;
  for(int i=0; i<n; i++)
  {
    sum += arr[i];
    MaxSum = max(MaxSum, sum);
    if(sum<0)
    sum =0;
  }
  return MaxSum;
}

int main()
{
  int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
  int n = 8;
  cout<< KadanesAlgo(arr, n);
}