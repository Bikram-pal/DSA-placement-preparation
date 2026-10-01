#include<bits/stdc++.h>
using namespace std;
string removeDigit(string str, int k)
{
  int n = str.size();
  stack<int> st;
  for(int i=0; i<n; i++)
  {
    while(!st.empty() && k>0 && st.top() > str[i]  )
    {
      st.pop();
      k--;
    }
    st.push(str[i]);
  }
  
  vector<int> rev;
  string result = "";
  while(k>0)
  {
    st.pop();
    k--;
  }
  while(!st.empty())
  {
    result.push_back(st.top());
    st.pop();
  }

  reverse(result.begin(), result.end());
  string ans;
  int flag = 0;
  for(int i=0; i<result.size(); i++)
  {
    
    
    if(result[i] == '0' && !flag)
    {
      continue;
    }
    else
    {
      flag = 1;
      ans.push_back(result[i]);

    }
  }
  ans = (ans == "")? "0" : ans;
  return ans;

}
int main()
{
  string str = "10";
  int k = 2;
  string result = removeDigit(str, k);
  cout<<result<<endl;
}