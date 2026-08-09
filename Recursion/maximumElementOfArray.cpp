#include<bits/stdc++.h>
using namespace std;
int maximum(vector<int> arr, int maxi, int count)
{
  if(count == arr.size())
  return maxi;
  maxi = max(arr[count], maxi);
  return maximum(arr,maxi,count+1);

}
int findMax(vector<int> arr)
{
  return maximum(arr,-1,0);
}
int main()
{
  vector<int> arr = {12,23,34,231,1};
  cout<< findMax(arr);

}