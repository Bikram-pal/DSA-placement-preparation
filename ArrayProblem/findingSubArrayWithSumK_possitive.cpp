#include<bits/stdc++.h>
using namespace std;
// brute approch
int findSubArraySumK(int arr[], int k, int n)
{
  int length =0;
  // n is the array length
  for(int i=0; i<n; i++)
  {
    int sum =0;
    for(int j=i; j<n; j++)
    {
      sum+=arr[j];
      if(sum == k)
      {
        length = max(length,j-i+1);
      }

    }
  }
  return length;
}

// better approch

// int findSubArraySumK2(int arr[], int k, int n)
// {
//   map <int, int> preSumMpp;

// }



int main()
{
  int arr[] ={1,2,2,1,1,1,1,4,2,3};
  int n = 10;
  int k =4;
  cout<<findSubArraySumK(arr, k, n);
}