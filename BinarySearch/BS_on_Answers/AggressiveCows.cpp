#include<bits/stdc++.h>
using namespace std;
// its the ptimal approch -> o(nlogn)
int findMinOfMaxDis(vector<int> &stalls, int cows, int minDis)
{
  int n = stalls.size();
  int count = 1;
  int last = stalls[0];
  for(int i=1; i<n; i++)
  {
    if(stalls[i] - last >= minDis)
      {
        count ++;
        last = stalls[i];
        if(cows== count)
        return 1;
      }
  }
  return 0;
}
int aggressiveCow(vector<int> &stalls, int cows)
{
  int n = stalls.size();
  sort(stalls.begin(), stalls.end());
  int low = 1;
  int high = stalls[n-1] - stalls[0] ;
  while(low<=high)
  {
    int mid = low + (high -low)/2;
    if(findMinOfMaxDis(stalls, cows, mid))
    low = mid + 1;
    else 
    high = mid - 1;
  }
  return high;
}

int main()
{
  vector<int> stalls = {1, 2, 4, 8, 9};
  int cows = 3;
  cout<<aggressiveCow(stalls, cows);
  return 0;
}