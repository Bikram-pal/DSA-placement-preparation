#include<bits/stdc++.h>
using namespace std;
void generatePara(vector<string> &arr,int n, int left, int right, string &temp)
{
  if(left==right && left == n)
  {
    arr.push_back(temp);
    return;
  }
  if(left<n)
  {
    temp.push_back('(');
    generatePara(arr,n,left+1,right,temp);
    temp.pop_back();
  }
  if(right<left)
  {
    temp.push_back(')');
    generatePara(arr,n,left,right+1,temp);
    temp.pop_back();
  }

  
}
int main()
{
  vector<string> arr;
  int n =2;
  string temp = "";
  generatePara(arr, n, 0, 0, temp);
  for(auto i: arr)
  {
    cout<<i<<" ";
  }
}