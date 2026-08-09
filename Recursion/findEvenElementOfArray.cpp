#include<bits/stdc++.h>
using namespace std;
void store(vector<int> &arr, vector<int> &result, int count)
{
  if(count >= arr.size())
  return;
  result.push_back(arr[count]);
  store(arr, result, count+2);
}
vector<int> EvenElement(vector<int> &arr)
{
  vector<int> result;
  store(arr, result, 0);
  return result;
}
int main()
{
  vector<int> arr = {12, 23, 34, 56, 67, 78};
  vector<int> result = EvenElement(arr);
  for(auto i:result)
  {
    cout<<i<<" ";
  }
  return 0;
}