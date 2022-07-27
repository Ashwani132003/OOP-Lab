#include <iostream>
using namespace std;

class A
{
 
  protected:
    int i;

  A()
  {
    i=10;
    cout<<"A: "<<i<<endl;
  }

};

class B1: public A
{
  
  public:
  int j;
  B1()
  {
    j = i+5;
    cout<<"B1: "<<j<<endl;
  }
};

class B2: public A
{
 
  public:
  int j;
  B2()
  {
    j = i+10;
    cout<<"B2: "<<j<<endl;
  }
};

class C: public B1
{
  int k;
  public:
  C()
  {
    k = j*5; 
    cout<<"C: "<<k<<endl;
  }
};

int main()
{
  B2 obj1;
  obj1;
  C obj;
  obj;
}