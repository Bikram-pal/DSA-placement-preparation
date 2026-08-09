#include<bits/stdc++.h>
using namespace std;
int check(string str, int i, int n)
{
  if(i>=n) return 1;
  if(str[i]!=str[n-1]) return 0;
  return check(str, i+1, n-1);
}
int checkPalindrome(string str)
{
  if(check(str, 0, str.size())) return 1;
  else return 0;
}
int main()
{
  string str = "om";
  cout<<checkPalindrome(str);
  return 0;
}