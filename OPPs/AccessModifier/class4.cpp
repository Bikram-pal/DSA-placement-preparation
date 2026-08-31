#include<iostream>
using namespace std;

class Human
{
  public:
  string name;
  int age;

};
class Student: private Human
{
  protected:
  int fees;
  int rollno;
  public:
  void setName(string name, int age)
  {
    this->name = name;
    this->age = age;
  }
  void getName()
  {
    cout<<name<<endl;
  }

};

int main()
{
  Student A1;
  A1.setName("bikram", 12);
  A1.getName();

}