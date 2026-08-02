#include<bits/stdc++.h>
using namespace std;
string reverse(string str, int i, string str2)
{
  
  
  if(i==0)
  {
    str2.push_back(str[i]);
    return str2;
  }
  str2.push_back(str[i]);
  return reverse(str, i-1, str2);
}
int main()
{
  string str = "abc";
  int i = str.size()-1;
  string str2 = "";
  cout<<reverse(str,i, str2);

}