#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int low, int high, int mid)
{
  vector<int> temp1;
  vector<int> temp2;
  for(int i=low; i<=mid; i++)
  {
    temp1.push_back(arr[i]);
  }
  for(int i=mid+1; i<=high; i++)
  {
    temp2.push_back(arr[i]);
  }
  int i = 0;
  int j = 0;
  int k = low;
  while(i<temp1.size()&&j<temp2.size())
  {
    if(temp1[i]<temp2[j])
    arr[k++] =temp1[i++];
    else 
    arr[k++] = temp2[j++];
  }
  while(i<temp1.size())
  {
    arr[k++] = temp1[i++];
  }
  while(j<temp2.size())
  {
    arr[k++] = temp2[j++];
  }

}
void mergeSort(vector<int> &arr, int low, int high)
{
  if(low==high) return;
  int mid = low + (high-low)/2;
  mergeSort(arr,low,mid);
  mergeSort(arr,mid+1,high);
  merge(arr,low, high, mid);
  
}
void sort(vector<int> &arr)
{
  mergeSort(arr,0,arr.size()-1);
}
int main()
{
  vector<int> arr = {12, 1, 3, 2, 34};
  sort(arr);
  
  for(int i:arr)
  {
    cout<<i<<" ";
  }
}