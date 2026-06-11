#include<bits/stdc++.h>
using namespace std;
struct node
{
  public:
  int data;
  node * next;

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
node * LL(vector<int> arr)
{
  node * head = new node(arr[0]);
  node* mover = head;
  for(int i=1;i<arr.size(); i++)
  {
    node* temp = new node(arr[i]);
    mover->next = temp;
    mover = temp;
  }
  return head;
}
void deleteNode(node  * head, int target)
{
  node* p = head;
  if(head==nullptr)
  {
    cout<<"Null of the head"<<"\n";
    return;
  }
  if(head->next== nullptr && head->data == target)
  {
    node* temp = head;
    head = nullptr;
    delete head;
    return;
  }
  node * cur = head;
  node *prev = nullptr;
  while(cur!=nullptr)
  {
    if(cur->data==target)
    {
      prev ->next = cur->next;
      delete cur;
      return;
    }
    prev = cur;
    cur = cur->next;
  }
}
void tarversal(node * head)
{
  node * temp = head;
  while(temp!=nullptr)
  {
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  cout<<endl;
  return;
}
void insertion(node *& head, int value, int position)
{
  node* temp = new node(value);
  if(position == 1)
  {
    temp->next = head;
    head = temp;
    return;
  }
  node * curr = head;
  node* prev = nullptr;
  int count = 1;
  while(curr!=nullptr)
  {
    if(count == position)
    {
      prev->next = temp;
      temp->next= curr;
     
      return;
    }
    prev= curr;
    curr = curr->next;
    count++;
  }
}
int main()
{
  vector<int> arr = {12,34,45,65};
  node * head = LL(arr);
  int target = 34;

  deleteNode(head, target);
  tarversal(head);
  insertion(head, 1, 2);
  tarversal(head);
  return 0;
}