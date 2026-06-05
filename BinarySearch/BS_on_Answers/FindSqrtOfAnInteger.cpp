#include<bits/stdc++.h>
using namespace std;
int findsqrt(int n)
  {
    int low = 1;
    int high = n;
    while(low<=high)
    {
      int mid = low + (high - low)/2;
      if(mid*mid==n)
      return mid;
      if(mid*mid<n)
      low = mid + 1;
      else if(mid*mid>n)
      high = mid -1;
    }
    return high;

  }
int main()
{
  int n = 5;
  cout<<findsqrt(n)<<endl;
  return 0;
}