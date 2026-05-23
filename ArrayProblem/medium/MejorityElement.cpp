#include<bits/stdc++.h>
using namespace std;
// better approch
// using hash map ..

int majorityElement(int arr[], int n){
  map<int, int> mpp;
  for(int i=0; i<n; i++)
  {
    mpp[arr[i]]++;
  }
  for(auto it:mpp)
  {
    if(it.second>n/2)
    {
      return it.first;
    }
  }
  return 0;
}
// optimal approch
int verifyEle(int arr[], int ele, int n)
{
  int c =0;
  for(int i=0; i<n; i++)
  {
    if(ele == arr[i])
    c++;
    if(c>n/2)
    return ele;
  }
  return 0;
}

// moore's algorithm 
int mooreVlotingAlgo(int arr[], int n)
{
  int count = 0;
  int ele;
  for(int i=0; i<n; i++)
  {
    if(count==0)
      ele = arr[i];
    if(ele == arr[i])
      count++;
    else if(ele != arr[i])
      count--;
  }
  return verifyEle(arr, ele, n);
}



int main()
{
  int arr[] = {2, 2, 3, 3, 1, 2, 2};
  int n = 7;
  // cout<<majorityElement(arr, n);
  cout<<mooreVlotingAlgo(arr, n);
}