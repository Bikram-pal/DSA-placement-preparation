#include<iostream>
using namespace std;
class complex
{
  int img, real;
  public:
  complex(int real, int img)
  {
    this->img = img;
    this->real = real;
  }
  complex()
  {
    
  }
  void display()
  {
    cout<<real<<"+"<< img<<"i\n";
  }
  complex operator +(complex &C)
  {
    complex ans;
    ans.real = real + C.real;
    ans.img = img + C.img;
    return ans;
  }

};

int main()
{
  complex C1(12, 23);
  complex C2(11, 33);
  complex C3 = C1+C2;
  C3.display();
}