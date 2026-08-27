#include<bits/stdc++.h>
using namespace std;
class customer
{
  string Name;
  int acc_no; 
  int balence;
  public:
  // default constructor
  customer()
  {
    Name = "bikram";
    acc_no = 1234;
    balence = 1000;
  }
  customer(string Name, int acc_no, int balence)
  {
    this->Name = Name;
    this->acc_no = acc_no;
    this->balence = balence;
  }

  void getUserDetails()
  {
    cout<<Name;
    cout<<acc_no;
    cout<<balence<<endl;
  }

  customer(customer &a)
  {
    Name = a.Name;
    acc_no = a.acc_no;
    balence = a.balence;
  }
};
int main()
{
  customer A1;
  customer A2("Aishi", 2131, 12121);
  customer A3("diganta", 12131,131313);
  customer A4(A1);
  customer A5;
  
  A5 = A3;
  A1.getUserDetails();
  A2.getUserDetails();
  A3.getUserDetails();
  A4.getUserDetails();
  A5.getUserDetails();
  
}