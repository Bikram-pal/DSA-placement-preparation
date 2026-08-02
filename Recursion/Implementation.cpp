#include<bits/stdc++.h>
using namespace std;
void fun2(int n)
{
  cout<<"hello " <<n<<endl;  
  
}
void fun1(int n)
{
  cout<<"hello " <<n<<endl;  
  fun2(n+1);
}
int fun0(int n)
{
  if(n==0) return 0; 
  cout<<fun0(n-1);
  return n; 
}

int main()
{
  cout<<fun0(2);
}