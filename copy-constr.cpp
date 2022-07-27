#include<iostream>
using namespace std;

class student
{
    
    
    private:
        int roll_number;
        int marks;
    public:
    student (int x,int y)
    {
        roll_number=x;
        marks=y;
    }

    student( student &a)
    {
        roll_number = a.roll_number;
         marks = a.marks;
    }

    void display()
    {
        cout<<"Roll No. : "<<roll_number<<" "<<"Marks : "<<marks<<endl;
    };
};

int main()
{
    student a(10,15);
    a.display();
    // student b(a);
    // b.display();
    student b = a;
    b.display();
}