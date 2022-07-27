#include<iostream>
using namespace std;

class Teacher{
    protected:
        int id_t=15;
};

class student:public Teacher
{
    public:
        int id_s =  id_t;
};

int main()
{
    student object;
    cout<<"Child Id = "<<object.id_s<<endl;

    object.id_s=12;
    // object.id_t=15;

    cout<<"Child Id = "<<object.id_s<<endl;
    // cout<<"Parent Id = "<<object.id_t<<endl;

}