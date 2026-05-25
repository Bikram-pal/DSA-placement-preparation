#include<bits/stdc++.h>
using namespace std;

// question sais that find the next permutation 
// so find the break point 
// then find the learge element and sawp it 
// then sort the suffix part 


vector<int>findNextPermutation(vector<int>&arr, int n)
{
  int index = -1;
  for(int i=n-2; i>=0; i--)
  {
    if(arr[i]<arr[i+1])
    {
      index = i;
      break;
    }
  }
  if(index == -1)
  {
    reverse(arr.begin(), arr.end());
    return arr;
  }

  for(int i = n-1; i>index; i--)
  {
    if(arr[i]>arr[index])
    {
      swap(arr[i], arr[index]);
      break;
    }
  }
  // sort(arr.begin()+index+1, arr.end()); //-> it give the o(nlogn)
  // but we use reverse because it is in decreasing order so just reverse it
  reverse(arr.begin()+index+1, arr.end()); // -> it give o(n)
  return arr;
}

int main()
{
  vector<int> arr = {2, 1, 5, 4, 3, 0, 0};
  int n = arr.size();
  vector<int>ans = findNextPermutation(arr, n);
  for(int i=0; i<n; i++)
  {
    cout<<ans[i]<<" ";
  }
  return 0;
}