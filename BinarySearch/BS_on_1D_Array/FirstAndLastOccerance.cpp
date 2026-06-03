#include<bits/stdc++.h>
using namespace std;
int findFirstOcc(vector<int> arr, int x)
{
  int n = arr.size();
  int low = 0;
  int high = n-1;
  int first = -1;
  while(low<=high)
  {
    int mid = low +(high-low)/2;
    if(x==arr[mid])
    {
      first = mid;
      high = mid -1;
    }
    else if(x>arr[mid])
    low = mid +1;
    else{
      high = mid -1;
    }
  }
  return first;
}

int findLastOcc(vector<int> arr, int x)
{
  int n = arr.size();
  int low = 0;
  int high = n-1;
  int last = -1;
  while(low<=high)
  {
    int mid = low +(high-low)/2;
    if(x==arr[mid])
    {
      last = mid;
      low = mid+1;
    }
    else if(x>arr[mid])
    low = mid +1;
    else{
      high = mid -1;
    }
  }
  return last;
}
int main()
{
  vector<int> arr = {1, 2, 3, 5, 11, 11, 12, 15, 19, 25};
  int target = 11;
  int fistOcc = findFirstOcc(arr, target);
  if(fistOcc==-1)
  {
    cout<<"-1, -1"<<endl;
    return 0;
  }
  else{
    cout<<"1st occ: "<<fistOcc<<endl;
  }
  int lastOcc = findLastOcc(arr, target);
  cout<<"last occ: "<<lastOcc<<endl;
  return 0;
}