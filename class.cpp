#include <iostream>
using namespace std;

class student
{
    int roll_no ;
    string name;
    public:
       
       void getdata()
       {
           cout<<"Enter roll no."<<endl;
           cin>>roll_no; 
           cout<<"Enter name"<<endl;
           cin>>name;
       }

       void putdata()
       {
           cout<<roll_no<<" "<<name<<endl;
           
       }
};


int main()
{
 
    student s1;
    s1.getdata();
    s1.putdata();

    return 0;

}