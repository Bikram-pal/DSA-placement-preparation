// Create an integer array of 5 elements. Take an index from the user and display the element. Throw an exception if the index is outside the range 0–4.

#include<iostream>
using namespace std;

int main()
{
  int arr[5]= {1, 2, 3, 4, 5};
  int a;
  cin>>a;
  try
  {
    if(a<0 || a>=5)
    {
      throw "array out of bound";
    }
    cout<<arr[a]<<endl;
  }

  catch(const char *e)
  {
    cout<<"Error occurs: " << e;
  }
  return 0;
}