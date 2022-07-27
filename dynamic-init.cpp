#include<iostream>
using namespace std;

class student
{
    
    
   
    int roll_number;
    int marks;
    public:
    student (int x,int y)
    {
        roll_number=x;
        marks=y;
    }


    void display()
    {
        cout<<"Roll No. : "<<roll_number<<" "<<"Marks : "<<marks<<endl;
    };
};

int main()
{
    int i, j;
    cout<<"Enter value of i and j:"<<endl;
    cin>>i>>j;
    student a(i,j);
    a.display();
    
}