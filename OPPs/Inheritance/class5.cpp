#include<iostream>
using namespace std;
class human
{
  protected:
  int age;
  string name;
  public:
  
  
};

class student: protected human
{
  int marks;
  int roll;

  public:
  student(string name, int age, int marks, int roll)
  {
    this->name = name;
    this->age = age;
    this->marks = marks;
    this->roll = roll;
  }
  void setname(string a)
  {
    name = a;
  }
  void getname()
  {
    cout<<name<<endl;
  }
};

int main()
{
  student A1("bikram", 20, 12, 12);
  
  A1.getname();
}