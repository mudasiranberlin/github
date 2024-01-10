//constructor and destructor
#include<iostream>
using namespace std;
class base
{
	public:
	base()//constructor
	{
		cout<<"Hello from Base class:"<<endl;
	}
	~base()//destructor
		{
			cout<<"object is destroyed of base class:"<<endl;
		}
};
class derived:public base
{
	public:
		derived()
		{
			cout<<"hello from Derived class:"<<endl;
		}
		~derived()
		{
			cout<<"object is destroyed of derived class:"<<endl;
		}
};
int main()
{
	derived d;
}
