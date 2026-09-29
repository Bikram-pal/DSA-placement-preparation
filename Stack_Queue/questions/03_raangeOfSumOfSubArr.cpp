#include<bits/stdc++.h>
using namespace std;
vector<int> findNSL(vector<int> &arr, int n)
{
  vector<int> nsl(n);
  stack<int> st;
  for(int i = 0; i<n; i++)
  {
    if(st.empty())
    {
      nsl[i] = -1;
    }
    else
    {
      while(!st.empty() && arr[st.top()]>=arr[i])
      {
        st.pop();
      }
      nsl[i] = (st.empty())? -1 : st.top();
    }
    st.push(i);
  }
  return nsl;
}
vector<int> findNSR(vector<int> &arr, int n)
{
  vector<int> nsr(n);
  stack<int> st;
  for(int i = n-1; i>=0; i--)
  {
    if(st.empty())
    {
      nsr[i] = n;
    }
    else
    {
      while(!st.empty() && arr[st.top()]>arr[i])
      {
        st.pop();
      }
      nsr[i] = (st.empty())? n : st.top();
    }
    st.push(i);
  }
  return nsr;
}
vector<int> findNLL(vector<int> &arr, int n)
{
  vector<int> nll(n);
  stack<int> st;
  for(int i = 0; i<n; i++)
  {
    if(st.empty())
    {
      nll[i] = -1;
    }
    else
    {
      while(!st.empty() && arr[st.top()]<=arr[i])
      {
        st.pop();
      }
      nll[i] = (st.empty())? -1 : st.top();
    }
    st.push(i);
  }
  return nll;
}
vector<int> findNLR(vector<int> &arr, int n)
{
   vector<int> nlr(n);
  stack<int> st;
  for(int i = n-1; i>=0; i--)
  {
    if(st.empty())
    {
      nlr[i] = n;
    }
    else
    {
      while(!st.empty() && arr[st.top()]<arr[i])
      {
        st.pop();
      }
      nlr[i] = (st.empty())? n : st.top();
    }
    st.push(i);
  }
  return nlr;
}

long long findSmallRange(vector<int> &arr, int n)
{
  vector<int>nsl = findNSL(arr, n);
  vector<int>nsr = findNSR(arr, n);
  long long sum = 0;
  const int MOD = 1e9 + 7;
  for(int i=0; i<n; i++)
  {
    long long left = (i - nsl[i]);
    long long right = (nsr[i] - i);
    sum += left*right*arr[i];
  }
  sum = sum%MOD;
  return sum;
  
}
long long findLargeRange(vector<int> &arr, int n)
{
  vector<int>nll = findNLL(arr, n);
  vector<int>nlr = findNLR(arr, n);
  long long sum = 0;
  const int MOD = 1e9 + 7;
  for(int i=0; i<n; i++)
  {
    long long left = (i - nll[i]);
    long long right = (nlr[i] - i);
    sum += left*right*arr[i];
  }
  sum = sum%MOD;
  return sum;
  
}
long long sumOfRange(vector<int> &arr)
{
  int n = arr.size();
  
  long long largeRange = findLargeRange(arr, n);
  long long smallRange = findSmallRange(arr, n);
  long long range  = largeRange - smallRange;
  return range;

}
int main()
{
  vector<int> arr = {1,2,3};
  cout<<sumOfRange(arr)<<endl;
}