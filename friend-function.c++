#include <iostream>
using namespace std;

class Distance
{
    private:
        int meters;
    public:
        Distance()
        {
            meters=0;
        }
        void Displaydata()
        {
            cout<<"Meters: "<<meters<<endl;
        }
        
        friend void addvalue(Distance &d);
    
};

void addvalue(Distance &d)
{
    d.meters = d.meters+5;
    cout<<"Updated: "<<d.meters;
}


int main() {
    // Write C++ code here
    
    Distance obj;
    obj.Displaydata();
    addvalue(obj);
    obj.Displaydata();

    return 0;
}