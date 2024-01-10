#include<iostream>
#include<string.h>
using namespace std;
class test
{
	char a[100];
	public:
		void getdata()
		{
			cout<<"Enter the data:";
			cin>>a;
		}
		void showdata()
		{
			cout<<"The Add of String:";
			cout<<" "<<a;
		}
		test operator+(test t2)
		{
			test t3;
			strcpy(t3.a,a);
			strcat(t3.a,t2.a);
			return t3;
		}
};
int main()
{
	test t1,t2,t3;
	t1.getdata();
	t2.getdata();
	t3=t1+(t2);
	t3.showdata();
}
