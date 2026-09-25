// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// 1. Open brackets must be closed by the same type of brackets.
// 2. Open brackets must be closed in the correct order.
// 3. Every close bracket has a corresponding open bracket of the same type.


#include<bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
  stack<char> st;
  int n = s.size();
  for(int i=0; i<n; i++)
  {
    if(s[i] == '(' || s[i] == '{' || s[i] == '[')
    {
      st.push(s[i]);
    }
    else{

      if(st.empty()) return 0;
      if((s[i] == ')' && st.top() == '(')||(s[i] == ']' && st.top() == '[')||(s[i] == '}' && st.top() == '{'))
      {
        st.pop();
      }
      else
      {
        return 0;
      }
    }
  }
  if(!st.empty())
    return 0;
    return 1;

}


int main()
{
  string s = "{{[]}}";
  cout<<isValid(s);
}