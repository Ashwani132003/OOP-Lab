#include<iostream>
using namespace std;

class bmw
{
    public:
        int model=4;

};

class price: public bmw
{
    public:
        int price=model*1000;
    void display()
    {
        cout<<price<<endl;
    }    

};

class car: public price
{
    public:
    int car_no;
};

int main()
{
    car obj;

    obj.model=3;
    obj.car_no=1;

    cout<<"Car model number = "<<obj.model<<endl;
    cout<<"Car price = "<<obj.price<<endl;
    cout<<"Car no. = "<<obj.car_no<<endl;
    obj.display();

}

