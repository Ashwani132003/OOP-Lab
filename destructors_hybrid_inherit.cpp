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
  ~A();

};
A::~A(){
  cout<<"A destroyed"<<endl;
  }

class B1: public A
{
  
  public:
  int j;
  B1()
  {
    j = i+5;
    cout<<"B1: "<<j<<endl;
  }
  ~B1();

};

B1::~B1(){
  cout<<"B1 destroyed"<<endl;
  }

class B2: public A
{
 
  public:
  int j;
  B2()
  {
    j = i+10;
    cout<<"B2: "<<j<<endl;
  }
~B2();

};

B2::~B2(){
  cout<<"B2 destroyed"<<endl;
  }

class C: public B1
{
  int k;
  public:
  C()
  {
    k = j*5; 
    cout<<"C: "<<k<<endl;
  }
  ~C();

};

C::~C(){
  cout<<"C destroyed"<<endl;
  }

int main()
{
  
  
  B2 obj1;
  obj1;
  C obj;
  obj;
}