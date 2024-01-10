//multilevel inheritence
#include<iostream>
using namespace std;
class stu
{
	int id;
	char name[30];
	public:
	void getdata()
	{
		cout<<"Enter the Id :";
		cin>>id;
		cout<<"Enter the Name:";
		cin>>name;
	}
	void showdata()
	{
		cout<<"Id:"<<id<<endl;
		cout<<"name:"<<name<<endl;
	}
};
class marks:public stu //class stu is derived
{
	protected://protected is used to futher inhertence
	int a;
	int b;
	public:
		void getmarks()
		{
			cout<<"Enter Marks Of Three Subject:";
			cin>>a>>b;
		}
		void showmarks()
		{
			cout<<"Marks of A:"<<a<<"Marks of B:"<<b<<endl;
		}
};
class result:public marks
{
	int t;
	public:
	void total()
	{
	t=a+b;
	cout<<"Total:"<<t;
}
};
int main()
{
	result t;
	t.getdata();
	t.showdata();
	t.getmarks();
	t.showmarks();
	t.total();
}
