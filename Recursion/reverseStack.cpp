#include<bits/stdc++.h>
using namespace std;
// method 1 with O(n) Auxiliary Space
void reverse(stack <int> &st)
{
  // base case
  if(st.empty()) return;

  int n = st.top();
  st.pop();
  reverse(st);
  stack<int> temp;
  while (!st.empty())
  {
    temp.push(st.top());
    st.pop();
  }
  st.push(n);
  while (!temp.empty())
  {
    st.push(temp.top());
    temp.pop();
  }
}


int main()
{
  stack <int> st ({6, 7, 1, 2, 3});
  reverse(st);
  while (!st.empty())
  {
    cout<<st.top()<<"\n";
    st.pop();

  }
  return 0;

}