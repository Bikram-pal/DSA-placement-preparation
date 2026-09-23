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

class stack
{
  public:
  node * top = NULL;
  int size  = 0;
  
  void push(int value)
  {
    node* temp = new node(value);
    if(top == NULL)
    {
      size++;
      top = temp;
      return;
    }
    temp->next = top;
    top = temp;
    size++;
  }

  void pop()
  {
    node* temp;
    if(size == 0)
    {
      cout<<"stack underflow\n";
      return;
    }
    
    temp = top;
    top = top ->next;
    delete temp;
    size--;

  }

  void s()
  {
    cout<<size<<endl;
  }
  void t()
  {
    if(size == 0)
    {
      cout<<"NULL\n";
      return;
    }
    cout<<top->data<<endl;
  }

};


int main()
{
  stack st;
  st.push(12);
  st.s();
  st.t();
  st.push(11);
  st.pop();
  st.pop();
  st.t();
}