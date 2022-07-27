#include <iostream>
#include <string.h>
using namespace std;

class nam{
	char* s;


	public:
	nam()
	{
        int len=0;
		s = new char[len+1];
	}

	nam(char*x)
	{
        int len = strlen(x);
		s = new char[len+1];
        strcpy(s,x);
		
	}
	void display()
	{
		cout << s << endl;
	}
};

int main()
{

	

	nam obj2("list");
	obj2.display();
}
