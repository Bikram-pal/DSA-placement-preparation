#include<bits/stdc++.h>
using namespace std;

// Rearrange array element by sign 
// number of neg element != positive element
// so we use brite froce approch
// total tc = O(2n)
// total sc  = O(n)
vector<int> Rearrange(vector<int> &arr, int n)
{
  vector<int>positive;
  vector<int>negetive;
  for(int i=0; i<n; i++)
  {
    if(arr[i]<0)
      negetive.push_back(arr[i]);
    else
      positive.push_back(arr[i]);
  }
  int m = min(positive.size(), negetive.size());
  int pos = 0;
  int neg = 0;
  for(int i=0; i<m; i++)
  {
    if(i%2==0)
    {
      arr[i] = positive[pos++];
    }
    else
    {
      arr[i] = negetive[neg++];
    }
  }

  int index = m;

  if(m< positive.size())
  {
    for(int i= pos; i< positive.size(); i++)
    {
      arr[index++] = positive[i];
    }
  }
  else
  {
    for(int i= neg; i< negetive.size(); i++)
    {
      arr[index++] = negetive[i];
    }
  }

  return arr;
}

int main()
{
  vector<int> arr = {12,2, -2, -1,23, -4, -2};
  int n = arr.size();
  auto ans = Rearrange(arr, n);
  for(int i=0; i<ans.size(); i++)
  {
    cout<<ans[i]<<" ";
  }
}