#include<iostream>
using namespace std;
class test2;
class test1
{
	int a;
	public:
		test1()
		{
			cout<<"Enter The Number:";
			cin>>a;
		}
		void showdata()
		{
			cout<<"The Result:";
			cout<<a;
		}
		friend void operator<(test1,test2);
	
};
class test2
{
	int b;
	public:
		test2()
		{
			cout<<"enter the b:";
			cin>>b;
		}
		friend void operator<(test1 ,test2);
		
};
void operator<(test1 t,test2 t2)
		{
			if(t.a<t2.b)
			cout<<"The A is Greater:";
			else
			cout<<"B is greater:";
		}
int main()
{
	test1 t;
	test2 t2;
	t.
	t>t2;
	//t.showdata();
}
