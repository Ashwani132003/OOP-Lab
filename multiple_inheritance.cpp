#include<iostream>
using namespace std;

class naming
{
    public:
        int reg_no;
};

class roll_no
{
    public:
        int roll_no;
};

class marks: public roll_no, public naming
{
    public:
        int marks = roll_no*10+reg_no; 
        
        

    void display()
    {
        cout<<"Name: "<<reg_no<<endl;
        cout<<"Name: "<<roll_no<<endl;

    }    
};


int main()
{
    marks obj;
    obj.roll_no=10;
    obj.reg_no=12;
    obj.display();
    cout<<obj.marks<<endl;
}
