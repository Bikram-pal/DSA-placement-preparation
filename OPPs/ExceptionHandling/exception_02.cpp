#include<iostream>
using namespace std;
int main()
{
  int a, b, c;
  cin>>a>>b;
  try{
    if(b == 0)
    throw "divisible by zero is not possible";
    c= a/b;
    cout<<c<<endl;
  }
  catch(const char *e)
  {
    cout<<"exception occurs: "<<e<<endl;
  }
}