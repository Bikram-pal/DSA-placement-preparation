#include<iostream>
using namespace std;
class stack
{
  int arr[5];
  int size = 5;
  int top = -1;
  public:
  void push(int value)
  {
    if(top == size-1)
    {
      cout<<"stack overflow\n";
      return;
    }
    arr[++top] = value;
  }
  void pop()
  {
    if(top == -1)
    {
      cout<<"stack underflow\n";
      return;
    }
    top--;
  }
  void t()
  {
    if(top == -1)
    {
      cout<<"null\n";
      return;
    }
    cout<<arr[top]<<endl;
  }
  void s()
  {
    cout<<top+1<<endl;
  }
};
int main()
{
  stack s1;
  s1.push(12);
  s1.s();
  s1.push(13);
  s1.t();
  s1.pop();
  s1.pop();
  s1.t();
}