#include<iostream>
using namespace std;

class student
{
    
    int roll_number;
    int marks;
    
    public:
    student (int i, int j): roll_number(i), marks(j)
    {
    }

    
    void display()
    {
        cout<<"Roll No. : "<<roll_number<<" "<<"Marks : "<<marks<<endl;
    };
};

int main()
{
    int i, j;
    cin>>i>>j;
    student a(i,j);
    a.display();
    
}