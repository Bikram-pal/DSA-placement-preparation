#include<bits/stdc++.h>
using namespace std;

// pair
void explainPair()
{
  pair<int, int> p = {1,3};
  // cout<<p.first;
  pair<int, pair<int, int>> f = {12,{1,2}};
  // cout<<f.second.second;

  pair<int, int> arr[] = {{1, 3}, {4, 5}, {6, 7}};
  cout<<arr[1].second;
}
int main()
{
  explainPair();
  return 0;
}