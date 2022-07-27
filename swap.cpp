#include <iostream>
using namespace std;


void swap(int x,int y)
{
  int temp = x;
  x = y;
  y = temp;

  cout<<"After Swapping"<<endl;
  cout<<x<<" "<<y<<endl;
  
}

int main(){

  int a;
  int b;

  cout<<"Enter the first number"<<endl;
  cin>>a;
  cout<<"Enter the second number"<<endl;
  cin>>b;

  swap(a,b);
  
  return 0;
  
}