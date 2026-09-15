#include<iostream>
using namespace std;
class area{
  public:
  int areaCalculate(int r)
  {
    return 3.14*r*r;
  }
  int areaCalculate(int l, int b)
  {
    return l*b;
  }
};

int main()
{
  area A1;
  cout<<A1.areaCalculate(12)<<endl;
  cout<<A1.areaCalculate(12,23);
}