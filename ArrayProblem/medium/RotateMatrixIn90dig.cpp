#include<bits/stdc++.h>
using namespace std;

// brute force approch
vector<vector<int>> rotateMatrix(vector<vector<int>> &matrix, int n)
{
  vector<vector<int>> ans(n, vector<int>(n));
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j++)
    {
      ans[j][n-1-i] = matrix[i][j];
    }
  }
  return ans;
}


// optimal solution -> to reduce sc 
void rotateMatrix_optimal(vector<vector<int>> &matrix, int n)
{
  for(int i=0; i<n; i++)
  {
    for(int j=i+1; j<n; j++)
    {
      else
      {
        swap(matrix[i][j], matrix[j][i]);
      }
    }
  }
  for(int i=0; i<n; i++)
  {
    int k = 0;
    int j = n-1;
    while(k<j)
    {
      swap(matrix[i][j], matrix[i][k]);
      k++;
      j--;
    }
  }
}
int main()
{
  vector<vector<int>> matrix = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
  vector<vector<int>> ans;
  int n = matrix.size();
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j++)
    {
      cout<< matrix[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
  // ans = rotateMatrix(matrix, n); //brute force
  // for(int i=0; i<n; i++)
  // {
  //   for(int j=0; j<n; j++)
  //   {
  //     cout<< ans[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }
  rotateMatrix_optimal(matrix, n);
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j++)
    {
      cout<< matrix[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}