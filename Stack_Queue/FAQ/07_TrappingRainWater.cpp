#include<bits/stdc++.h>
using namespace std;
vector<int> findingLeft_max(vector<int> & arr, int n)
{
  vector<int> left_max(n);
  int m = arr[0];
  left_max[0] = arr[0];
  for(int i=1; i<n; i++)
  {
    m = max(m, arr[i]);
    left_max[i] = m;
  }

  return left_max;
}

vector<int> findingRight_max(vector<int> & arr, int n)
{
  vector<int> right_max(n);
  int m = arr[n-1];
  right_max[n-1] = arr[n-1];
  for(int i=n-2; i>= 0; i--)
  {
    m = max(m, arr[i]);
    right_max[i] = m;
  }

  return right_max;
}


int trapingRainWater(vector<int> &height)
{
  int n = height.size();
  vector<int> nll = findingLeft_max(height, n);
  vector<int> nlr = findingRight_max(height, n);
  int ans = 0;
  for(int i=0; i<n; i++)
  {
    ans += min(nll[i], nlr[i]) - height[i];
  }

  return ans;
  
}
int main()
{
  vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
  cout<<trapingRainWater(height)<<endl;

}