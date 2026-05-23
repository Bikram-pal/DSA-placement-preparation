#include<bits/stdc++.h>
using namespace std;

int MaxProf(int arr[], int n)
{
  int profit = 0;
  int minCost = arr[0];
  for(int i=1; i<n; i++)
  {
    profit = max(profit, arr[i] - minCost);
    minCost = min(minCost, arr[i]);
  }
  return profit;
}

int main()
{
  int arr[] = {7, 1, 5, 3, 6, 4};
  int n = 6;
  cout<< MaxProf(arr, n);
}