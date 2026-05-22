#include<bits/stdc++.h>
using namespace std;

// better solution



// optimal approch -> Datch National Flag Algoritham

// use 3 pointers low, mid, high

void SortArray(int arr[], int n)
{
  int low = 0;
  int mid = 0;
  int high = n-1;
  while(mid<=high)
  {
    if(arr[mid]==0)
    {
      swap(arr[mid],arr[low]);
      mid++,low++;
    }
    else if(arr[mid]==1)
    {
      mid++;
    }
    else
    {
      swap(arr[mid], arr[high]);
      high--;
    }
  }
}

// print the array
void printarray(int arr[], int n)
{
  for(int i=0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<"\n";
}

int main()
{
  int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0};
  int n = 11;
  printarray(arr, n);
  // SortArray(arr, n);
  printarray(arr, n);
  
}