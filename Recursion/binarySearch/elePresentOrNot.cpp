#include<bits/stdc++.h>
using namespace std;
bool recursion(vector<int> &arr, int low, int high, int x)
{
  if(low>high) return false;
  int mid = low + (high-low)/2;
  if(arr[mid]==x) return true;
  if(arr[mid]>x) 
  return recursion(arr, low, mid-1, x);
  else
  return recursion(arr,mid+1, high, x);
}
bool findElement(vector<int> &arr ,int x)
{
  return recursion(arr,0,arr.size()-1, x);
}
int main()
{
  vector<int> arr = {12, 34, 45, 56, 67};
  cout<<findElement(arr, 34);
}