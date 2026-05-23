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


int main()
{
  int arr[] = {2, 2, 3, 3, 1, 2, 2};
  int n = 7;
  cout<<majorityElement(arr, n);
}