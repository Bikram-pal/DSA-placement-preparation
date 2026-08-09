#include<bits/stdc++.h>
using namespace std;

void recursion(string &str, int i, int n)
{
    if(i>=n) return;
    char temp = str[i];
    str[i] = char(int(temp)-32);
    recursion(str, i+1, n);
}
string to_upper(string str) {
    // code
    recursion(str, 0, str.size());
    return str;
    
}

int main()
{
  string str = "bikram";
  string str2 = to_upper(str);
  cout<<str2;
}