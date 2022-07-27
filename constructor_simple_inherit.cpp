#include <iostream>
using namespace std;


class A
{
  
  protected:
    A()
    {
      cout<<"Inside main class"<<endl;
  
    }
  
};

class B: public A
{
  public: 
  B(){
      cout<<"Inside sub-class"<<endl;
  }
};


int main() {

  B obj;
  obj;
  
  
}