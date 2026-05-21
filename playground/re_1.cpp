// #include<bits/stdc++.h>
// using namespace std;
// void printRevOrder(int i, int n){
//   if(i<1)
//   return;
//   cout<<i<<"\n";
//   printRevOrder(i-1,n);

// }
// int main(){
//   int n;
//   cin>>n;
//   printRevOrder(n,n);
// }




// print n to 1 by using backtract 
#include<bits/stdc++.h>
using namespace std;

void printNto1Backtrack(int i,int n){
  if(i>n)
    return;
  printNto1Backtrack(i+1,n);
  cout<<i<<"\n";
}

int main(){
  int n;
  cin>>n;
  printNto1Backtrack(1,n);
}