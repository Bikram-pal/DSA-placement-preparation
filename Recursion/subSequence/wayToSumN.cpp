#include<bits/stdc++.h>
using namespace std;
void SumN(vector<int>&arr, int &total, int &target)
{
  if(target==0)
  {
    total++;
    return;
  }
  if(target<0)
  {
    return;
  }
  for(int i=0; i<arr.size(); i++)
  {
    target -= arr[i];
    SumN(arr, total, target);
    target += arr[i];
    
  }
}

int main()
{
  vector<int> arr = {1, 2, 3};
  int total = 0;
  int target = 4;
  SumN(arr, total, target);
  cout<<total;
}