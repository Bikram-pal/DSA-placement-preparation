#include<iostream>
using namespace std;

class node
{
  public:
  int data;
  node* next;

  node(int value)
  {
    data = value;
    next = NULL;
  }
};

class queue
{
  public:
  node* start = NULL;
  node* end = NULL;
  int size = 0;

  void push(int value)
  {
    node * temp = new node(value);
    if(start == NULL && end == NULL)
    {
      start = end = temp;
      size++;
      return;
    }
    end ->next = temp;
    end = temp;
    size++;
  }

  void pop()
  {
    if(size == 0)
    {
      cout<<"queue underflow\n";
      return;
    }
    if(size == 1)
    {
      node * temp;
      temp = start;
      end = NULL;
      start = NULL;
      delete temp;
      size--;
      return;
    }

    node * temp;
    temp = start;
    start = start->next;
    size--;
    delete temp;
    return;

  }

  void top()
  {
    if(size == 0)
    {
      cout<<"NULL\n";
      return;
    }
    cout<<start->data<<endl;
    return;
  }
  void s()
  {
    cout<<size<<endl;
  }
  
};
int main()
{
  queue q1;
  q1.push(14);
  q1.push(12);
  q1.top();
  q1.pop();
  q1.top();
  q1.s();
}