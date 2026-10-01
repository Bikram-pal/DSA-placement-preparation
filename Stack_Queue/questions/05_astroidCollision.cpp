#include<bits/stdc++.h>
using namespace std;
vector<int> findAsteroidCollison(vector<int> &arr)
{
  int n = arr.size();
  stack<int> st;
  
  for(int i=0; i<n; i++)
  {
    while(!st.empty() && st.top()>0 && arr[i]<0)
    {
      int ans = st.top()+arr[i];
      if(ans<0)
      {
        st.pop();
      }
      else if(ans>0)
      {
        arr[i] = 0;
      }
      else
      {
        arr[i] = 0;
        st.pop();
        
      }
    }
    if(arr[i]!=0)
    {
      st.push(arr[i]);
    }

  }
  int s = st.size();
  vector<int> result(s);
  for(int i=s-1; i>=0; i--)
  {
    result[i] = st.top();
    st.pop();
  }
  return result;
  
}
int main()
{
  vector<int> arr = {3,5,-6,2,-1,4};
  vector<int> result = findAsteroidCollison(arr);
  for(auto i:result)
  {
    cout<<i<<" ";
  }
  return 0;
}