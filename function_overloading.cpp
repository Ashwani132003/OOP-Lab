#include <iostream>
using namespace std;

void add(int x, int y)
{
    cout<<"Addition is: ";
    cout<<x+y<<endl;

};

void add(int x, int y, int z)
{
    cout<<"Addition is: ";
    cout<<x+y+z<<endl;
};


int main(){

    int a;
    int b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;

    add(a,b);
    add(a,b,10);

}