// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

void print(vector<pair<int, int>> &arr)
{
  for(auto &i: arr)
  {
    cout<<i.first<<" "<<i.second<<", ";
  }
  cout<<"\n";
}
bool lamada(pair<int, int> a, pair<int, int> b)
{
  if(a.first>b.first) return true;
  return false;
}
int main()
{
  // vector<int> vec = {12, 23, 1, 3, 11};
  vector<pair<int, int>> vec = {{4, 10},
    {2, 5},
    {4, 1},
    {4, 3},
    {9, 8}};
  print(vec);
  sort(vec.begin(), vec.end(), lamada);
  print(vec);
}