#include<iostream>
using namespace std;

class queue
{
  int start = -1;
  int end = -1;
  int size = 5;
  int q[5];
  int currSize = 0;
  public:
  void push(int value)
  {
    if(end == -1 && start == -1)
    {
      start = end = 0;
      q[end] = value;
      currSize++;
    }
    else if(currSize < size)
    {
      end = (end + 1)%size;
      q[end] = value;
      currSize++;
    }
    else
    {
      cout<<"queue overflow\n";
    }
  }
  void pop()
  {
    if(currSize==0)
    {
      cout<<"queue underflow\n";
      return;
    }
    if(currSize == 1)
    {
      start = end = -1;
    }
    else
    {
      start = (start+1)%size;
    }
    currSize--;
  }
  void s()
  {
    cout<<currSize<<endl;
  }
  void top()
  {
    if( currSize == 0)
    {
      cout<<"null"<<endl;
      return;
    }
    cout<<q[start];
  }

};
int main()
{
  queue q1;
  q1.push(12);
  q1.push(1);
  q1.s();
  q1.top();
}