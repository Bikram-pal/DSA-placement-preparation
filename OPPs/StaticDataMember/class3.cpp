#include<bits/stdc++.h>
using namespace std;
class customer
{
  string name;
  int acc_no;
  int balence;
  int static total_customer;
  static int total_balence;
  public:
  customer(string a, int b, int c)
  {
    name = a;
    acc_no = b;
    balence = c;
    total_customer++;
    total_balence+=balence;
  }
  void deposit(int amount)
  {
    if(amount>0)
    {
      balence+=amount;
      total_balence+=amount;
    }
    cout<<balence<<endl;
  }
  void withdraw(int amount)
  {
    if(amount<=balence)
    {
      balence-=amount;
      total_balence-=amount;
    }
    cout<<balence<<endl;
  }
  void get_user_details()
  {
    cout<<name<<" "<<acc_no<< " "<<balence<<endl;
  }
  int get_total_user()
  {
    return total_customer;
  }
  static void get_static()
  {
    cout<<total_customer<<endl;
    cout<<total_balence<<endl;
  }
};

int customer:: total_customer = 0;
int customer:: total_balence = 0;

int main()
{
  customer A1("bikram", 111,1000);
  customer A2("aishi", 110,1200);
  A1.get_user_details();
  cout<<A1.get_total_user()<<endl;
  A1.deposit(120);
  customer::get_static();

}