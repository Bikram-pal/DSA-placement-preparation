#include<bits/stdc++.h>
using namespace std;

// brute force approch 

void rowZero(vector<vector<int>> &matrix, int i, int m)
{
  for(int j=0; j<m; j++)
  {
    if(matrix[i][j] == 0)
    continue;
    else 
    matrix[i][j]= -1;
  }
}

void colZero(vector<vector<int>> &matrix, int j, int n)
{
  for(int i=0; i<n; i++)
  {
    if(matrix[i][j] == 0)
    continue;
    else 
    matrix[i][j]= -1;
  }
}
void changeNegOneToZero(vector<vector<int>> &matrix, int n, int m)
{
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<m; j++)
    {
      if(matrix[i][j] == -1)
      matrix[i][j] = 0;
    }
  }
}
void SetMatrixZeros(vector< vector<int>> &matrix, int n, int m)
{
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<m; j++)
    {
      if(matrix[i][j]==0)
      {
        rowZero(matrix, i, m);
        colZero(matrix, j, n);
      }
    }
  }
  changeNegOneToZero(matrix, n, m);
}

int main()
{
  vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
  int rowSize = matrix.size();
  int colSize = matrix[0].size();
  SetMatrixZeros(matrix, rowSize, colSize);
  for(int i=0; i<rowSize; i++)
  {
    for(int j=0; j<colSize; j++)
    {
      cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}