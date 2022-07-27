#include <iostream>
using namespace std;

int main() {

  int a = 10;
  int &b = a;

  cout<<"a = "<<a<<endl;

  b = 30;

  cout<<"b = "<<b<<endl;
  cout<<"a = "<<a<<endl;

  return 0;
  
  
}