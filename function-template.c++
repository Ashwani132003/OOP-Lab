// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

template <typename t, typename s>
t add(t x, s y)
{ cout<<x+y<<endl;
}

template <typename m>
m multiply(m x, m y)
{
    cout<<x*y<<endl;
}

int main() {
    // Write C++ code here
    add(10.5,5.3);
    add(19,10.3);
    multiply(4,5);
    multiply(3.5,4.8);
    return 0;
}