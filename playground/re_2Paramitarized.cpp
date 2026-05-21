#include<bits/stdc++.h>
using namespace std;

void printSum(int i, int sum){
  if(i<1)
  {
    cout<<sum;
    return;
  }
  printSum(i-1,sum+i);

}
int main(){
  int n;
  cin>>n;
  printSum(n,0);
  return 0;
}