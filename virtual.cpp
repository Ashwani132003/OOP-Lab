#include <iostream>
using namespace std;

class A
{
  public:
      
    int i;

  A()
  {
    i=10;
    cout<<"A: "<<i<<endl;
  }
};

class B1: virtual public A
{
  
  public:
  int j;
  B1()
  {
    j = i+5;
    cout<<"B1: "<<j<<endl;
  }


};


class B2: virtual  public A
{
 
  public:
  int j1;
  B2()
  {
    j1 = i+10;
    cout<<"B2: "<<j1<<endl;
  }


};


class C: public B1, public B2
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
  C obj;
  obj;
}
