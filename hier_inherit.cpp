#include <iostream>
using namespace std;

class tree
{
    public:
        int root=16;
};

class lnode: public tree
{
    public:
        int lroot=root/2;
    lnode(){    
        cout<<lroot<<endl;
    }
};

class rnode: public tree
{
    public:
        int rroot=root/2+1;
    rnode(){    
        cout<<rroot<<endl;
    }    
};

int main()
{
    lnode obj;
    rnode obj1;

    return 0;

}