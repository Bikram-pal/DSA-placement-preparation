#include<bits/stdc++.h>
using namespace std;
vector<int> findingNSL(vector<int> &arr, int n)
{
  vector<int> nsl(n);
  stack<int> st;
  for(int i=0; i<n; i++)
  {
    if(st.empty())
    {
      nsl[i]=-1;
    }
    else
    {
      while(!st.empty() && arr[st.top()]>= arr[i])
      {
        st.pop();
      }
      nsl[i] = (st.empty())? -1 : st.top();
    }
    st.push(i);
    

  }
  return nsl;
}

vector<int> findingNSR(vector<int> &arr, int n)
{
  vector<int> nsr(n);
  stack<int> st;
  for(int i=n-1; i>=0; i--)
  {
    if(st.empty())
    {
      nsr[i]=n;
    }
    else
    {
      while(!st.empty() && arr[st.top()]> arr[i])
      {
        st.pop();
      }
      nsr[i] = (st.empty())? n : st.top();
    }
    st.push(i);
    
  }
  return nsr;
}
int largestRectrangleArea(vector<int> &height)
{
  int n = height.size();
  vector<int>nsl = findingNSL(height, n);
  vector<int>nsr = findingNSR(height, n);
  long long m = 0;
  for(int i=0; i<n ; i++)
  {
    long long left = nsl[i];
    long long right = nsr[i];
    long long width = right - left -1;
    long long area = width*height[i];
    m = max(m, area);
  }
  return m;

}
int main()
{
  vector<int> height = {2,1,5,6,2,3};
  cout<<largestRectrangleArea(height);
}