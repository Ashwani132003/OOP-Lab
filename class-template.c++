// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

template <typename t>
class weight{
    private:
        t kg;
    public:
        void set(t x)
        {
            kg=x;
        }
        void getdata()
        {
            cout<<"Weight is: "<<kg;
        }
};
// t add(t x, s y)
// { cout<<x+y<<endl;
// }

int main() {
    // Write C++ code here
    // add(10.5,5.3);
    // add(19,10.3);
    weight <int>obj;
    obj.set(5);
    obj.getdata();

    return 0;
}