#include<bits/stdc++.h>
using namespace std;
void clearStack(stack<int> &st1, stack<int> &st2)
{
  while(!st1.empty())
  {
    st1.pop();
    st2.pop();
  }
}
int sum(vector<int> &arr)
{
  int n = arr.size();
  vector<int> nsl(n);
  stack<int> st1;
  stack<int> st2;
  for(int i=0; i<n; i++)
  {
    while(!st1.empty() && st1.top() > arr[i])
    {
      st1.pop();
      st2.pop();
    }
    if(st1.empty())
    {
      st1.push(arr[i]);
      st2.push(i);
      nsl[i] = -1;
      continue;
    }
    
    nsl[i] = st2.top();
    st1.push(arr[i]);
    st2.push(i);
  }
  clearStack(st1, st2);
  vector<int> nsr(n);
  int s = 0;
  for(int i=n-1; i>=0; i--)
  {
    while(!st1.empty() && st1.top() > arr[i])
    {
      st1.pop();
      
      st2.pop();
      
    }
    if(st1.empty())
    {
      st1.push(arr[i]);
      st2.push(i);
      nsr[i] = n;
      continue;
    }
    
    nsr[i] = st2.top();
    st1.push(arr[i]);
    st2.push(i);
    // claculate the sum
  }
  for(int i=0; i<n; i++)
  {
    s += (i-nsl[i])*(nsr[i] - i)*arr[i];
  }
  
  
  return s;
}
int main()
{
  vector<int> arr = {3,1,2,4};
  cout<<sum(arr)<<endl;
}