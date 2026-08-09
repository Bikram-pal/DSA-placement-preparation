#include<bits/stdc++.h>
using namespace std;
int product(vector<int> &arr, int count, int prod)
{
  if(count == arr.size())
   return prod;
   prod = prod*arr[count];
  return product(arr, count+1, prod);
}
int productOfArray(vector<int> &arr)
{
  return product(arr, 0, 1);
}
int main()
{
  vector<int> arr = {12, 23, 34, 45};
  cout<< productOfArray(arr);
  return 0;
}