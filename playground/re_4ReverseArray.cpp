#include<bits/stdc++.h>
using namespace std;

void ReverseArray(int i, int j, vector<int> &arr){
  if(i>=j)
  return;
  swap(arr[i],arr[j]);
  ReverseArray(i+1,j-1,arr);
}
int main(){
  vector<int> arr= {1,2,3,4,5,6};
  ReverseArray(0,(arr.size()-1), arr);

  for(int i:arr){
    cout<<i<<"\n";
  }
}