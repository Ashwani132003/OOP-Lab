#include <iostream>
using namespace std;

class tree
{
    public:
        int root=16;
};

class lnode: public virtual tree
{
    public:
        int lroot=root/2;
    lnode(){    
        cout<<"Left node (using hierarchial)"<<lroot<<endl;
    }
};

class rnode: public virtual tree
{
    public:
        int rroot=root/2+1;
    rnode(){    
        cout<<"Right node (using hierarchial inheritance)"<<rroot<<endl;
    }    
};

class end1: public lnode, public rnode
{   
    public:
        int endnode = rroot + lroot;
    end1()
    {
        cout<<"End node (using multiple inheritance)"<<endnode<<endl;
    }    
};

int main()
{
    lnode obj;
    rnode obj1;
    end1 obj2;
    return 0;

}