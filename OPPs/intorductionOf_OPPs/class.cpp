#include<bits/stdc++.h>
using namespace std;
class Student
{
  // public: // Access Modifier : public, private(default), protected  
  string name;
  int age, roll_number;
  string grade;
  // function: getter setter
  public:
   void setname(string n)
   {
     if(n.size()== 0)
     cout<<"invaild name";
     return;
     name = n;
   }
   void setage(int n)
   {
    age = n;
   }
   void getname()
   {
    cout<<name<<endl;
   }
   void getage()
   {
    cout<<age<<endl;
   }
   void setgrade(string s)
   {
    grade = s;
   }
   string getgrade(int pin)
   {
    if(pin == 1234)
    return grade;
    cout<<"invalid pin"<<endl;
    return "";
   }
  
};
int main()
{
  
  Student s2;
  s2.setname("");
  s2.getname();
  s2.setage(12);
  s2.getage();
  s2.setgrade("A");
  cout<<s2.getgrade(124);
}