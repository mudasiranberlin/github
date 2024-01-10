#include<iostream>
using namespace std;
class test 
{
	public:
	static int a;
	void getdata()
	{
		cout<<a;
	}
};
int test::a=1212;
int main()
{
	test t1;
	cout<<test::a;
}
