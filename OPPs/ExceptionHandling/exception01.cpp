#include<iostream>
using namespace std;
class account
{
  int balence;
  string name;
  public:
  account(int balence, string name)
  {
    this->balence = balence;
    this->name = name;
  }

  void withdraw(int amount)
  {
    if(amount<=0)
    {
      throw "enter more than 0 ";
    }
    else if(amount>balence)
    {
      throw "your balence is lower than your entered amount\n";
    }
    else
    {
      balence-=amount;
      cout<<amount<<"is withdraw\n";
    }
  }
  void deposit(int amount)
  {
    if(amount<=0)
    {
      throw "enter positive value\n";
    }
    else
    {
      balence+=amount;
      cout<<amount<<"add to your balence\n";
    }
  }

  void displayBalence()
  {
    cout<<"name: "<<name<<"total bal:" << balence<<endl;
  }
  
};
int main()
{
  account A1(1000,"Bikram");
  try{
    A1.deposit(1000);
    A1.withdraw(2001);
  }
  catch(const char *e)
  {
    cout<<"error occurs: "<< e<<endl;
  }
  
}