#include<iostream>
using namespace std;
class test
{
	int a;
	public:
	void getdata()
	{
		cout<<"Enter the Number:";
		cin>>a;
	}
	void operator==(test t2)
	{
		if(a==t2.a)
		cout<<"Equal";
		else
		cout<<"Not Equal";
	}
};
int main()
{
	test t1,t2;
	t1.getdata();
	t2.getdata();
	t1==(t2);
}
