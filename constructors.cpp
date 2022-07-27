#include<iostream>
using namespace std;

class student
{
    int roll_number;
    int marks;

    public:
    student()
    {
        roll_number=145;
        marks=100;
    }
    void display()
    {
        cout<<"Roll No. : "<<roll_number<<" "<<"Marks : "<<marks<<endl;
    };
};

int main()
{
    student a;
    a.display();
}