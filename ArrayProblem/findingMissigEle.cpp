#include<bits/stdc++.h>
using namespace std;


// int main()
// {
//   int n;
//   cin>>n;
//   int arr[n-1];
//   int hash[n+1]={0};
//   for(int i=0; i<n-1; i++)
//   {
//     cin>>arr[i];
//   }
//   for(int i=0;i<n-1; i++)
//   {
//     hash[arr[i]] = 1;
//   }
//   for(int i=1; i<=n; i++)
//   {
//     if(hash[i]==0)
//     {
//       cout<<i;
//     }
//   }

//   return 0;
// }


// optimal solution
// solution 1



int findMissEle(int n, int arr[]){
  int sum1= (n*(n+1))/2;
  int sum2 =0;
  for(int i=0; i<n-1; i++)
  {
    sum2+=arr[i];
  }
  return sum1-sum2;
}


// solution 2
int findMissEle2(int n, int arr[])
{
  int xor1 = 0;
  int xor2 = 0;
  for(int i=0; i<n-1; i++)
  {
    xor1^=i+1;
    xor2^=arr[i];
  }
  xor1^=n;

  return xor1^xor2;
}


int main()
{
  int n;
  cin>>n;
  int arr[n-1];
  for(int i=0; i<n-1; i++)
  {
    cin>>arr[i];
  }
  // cout<<findMissEle(n,arr);
  cout<<findMissEle2(n,arr);
}


