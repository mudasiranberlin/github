#include<iostream>
using namespace std;
class test
{
	int a;
	public:
		test()
		{
			cout<<"Enter The Number:";
			cin>>a;
		}
		void showdata()
		{
			cout<<"The Result:";
			cout<<a;
		}
		void operator>(test t2)
		{
			if(a<t2.a)
			cout<<"The A is Greater:";
			else
			cout<<"B is greater:";
		}
	
};
int main()
{
	test t,t2;
	t>(t2);
	//t.showdata();
}
