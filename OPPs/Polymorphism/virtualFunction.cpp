#include<iostream>
using namespace std;
class animal
{
  public: 
  virtual void speak()
  {
    cout<<"Hu Hu\n";
  }
};
class dog : public animal
{
  public:
  void speak()
  {
    cout<<"bark\n";
  }
};

int main()
{
  animal *a1;
  a1 = new dog();
  a1->speak();

}