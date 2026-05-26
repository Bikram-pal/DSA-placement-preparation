#include<bits/stdc++.h>
using namespace std;
// better approch 
int longestConsecutiveSequence(vector<int> & arr, int n)
{
  sort(arr.begin(), arr.end());
  int currentLength = 1;
  int maxLength = 1;
  for(int i=0; i<n-1; i++)
  {
    if(arr[i]==arr[i+1])
    continue;
    
    if(arr[i+1]-arr[i]==1)
    {
      currentLength++;
    }
    else
    currentLength=1;
    maxLength = max(maxLength, currentLength);
  }
  return maxLength;
}
int main()
{
  vector<int> arr = {100,4,200,1,3,2};
  int n = arr.size();
  cout<<longestConsecutiveSequence(arr,n);
}