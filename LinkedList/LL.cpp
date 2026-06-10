#include<bits/stdc++.h>
using namespace std;
struct node
{
  
  int data;
  node* next;

  
  node(int data1, node* next1)
  {
    data = data1;
    next = next1;
  }
  node(int data1)
  {
    data = data1;
    next = nullptr;
  }
};

node* convertArr2LL(vector<int>arr)
{
  node* head = new node(arr[0]);
  node* mover = head;
  for(int i=1; i<arr.size(); i++)
  {
    node* temp = new node(arr[i]);
    mover->next = temp;
    mover = temp;
  }
  return head;
}

void tarversal(node * head)
{
  node * temp = head;
  while(temp!=nullptr)
  {
    cout<<temp<<" ";
    temp = temp->next;
  }
  return;
}

int main()
{
  vector<int> arr = {12, 2, 4, 5};
  node* head = convertArr2LL(arr);
  tarversal(head);
}