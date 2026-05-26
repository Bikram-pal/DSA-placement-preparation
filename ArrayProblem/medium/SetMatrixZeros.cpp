#include<bits/stdc++.h>
using namespace std;

// brute force approch 
// TC -> (n*m)(n+m) + n*m

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


// Better Approch
// tranck only the zero instand of the tracking effecting ones
//  tc = o(2*n*m);
// sc = o(n) + o(m)

void SetMatrixZeros2_betterapp(vector<vector< int>> &matrix, int n, int m)
{
  vector<int> row(n, 0);
  vector<int> col(m, 0);
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<m; j++)
    {
      if(matrix[i][j]==0)
      {
        row[i]= 1;
        col[j] = 1;
      }
    }
  }

  for(int i =0; i<n; i++)
  {
    for(int j=0; j<m; j++)
    {
      if(row[i] == 1 || col[j] == 1)
      matrix[i][j] = 0;
    }

  }

}


// optimal solution -> retuce space complexity
// use matcix for row and col store instands of using extra arrs
// tc -> o(2n*m) + o(n) +o(m)
// sc -> o(1) 
void SetMatrixZeros2_optimalSol(vector<vector<int>> &matrix, int n, int m)
{
  int col0 = 1;
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<m; j++)
    {
      if(matrix[i][j]==0)
      {
        matrix[i][0] = 0;
        if(j!=0)
          matrix[0][j] = 0;
        else
          col0 = 0;
      }
    }
  }
  for(int i=1; i<n; i++)
  {
    for(int j=1; j<m; j++)
    {
      if(matrix[0][j]==0 || matrix[i][0] == 0)
      {
        matrix[i][j] = 0;
      }
    }
  }
  if(matrix[0][0]==0)
  {
    for(int j=0; j<m; j++)
    {
      matrix[0][j] = 0;
    }
  }
  if(col0 == 0)
  {
    for(int i=0; i<n; i++)
    {
      matrix[i][0] = 0;
    }
  }
}

int main()
{
  vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
  int rowSize = matrix.size();
  int colSize = matrix[0].size();
  // SetMatrixZeros(matrix, rowSize, colSize); // brute force
  // SetMatrixZeros2_betterapp(matrix, rowSize, colSize); // better approch
  SetMatrixZeros2_optimalSol(matrix, rowSize, colSize);
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