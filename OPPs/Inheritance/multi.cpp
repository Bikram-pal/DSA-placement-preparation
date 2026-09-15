#include<iostream>
using namespace std;
class student
{
  protected:
  string subject;
  public:
  void study()
  {
    cout<<"subject:"<<subject<<endl;
  }

};
class sports
{
  protected:
  string game;
  public:
  void play()
  {
    cout<<"play: "<<game<<endl;
  }
};

class result : public student , public sports
{
  public:
  result(string a, string b)
  {
    subject= a;
    game = b;
  }
};
int main()
{
  result r1("math", "h1");
  r1.play();
  r1.study();

}