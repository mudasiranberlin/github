#include<iostream>
using namespace std;
class stu
{
	int rollno;
	char name[30];
	public:
		void getdata()
		{
			cout<<"Enter The Rollno:";
			cin>>rollno;
			cout<<"Enter the name:";
			cin>>name;
		}
		void showdata()
		{
			cout<<"Rollno:"<<rollno<<endl;
			cout<<"Name:"<<name<<endl;
		}
};
class stu1:private stu
{
	int age;
	int fee;
	public:
	void getdata1()
	{
		getdata();
		cout<<"Enter the Age:";
		cin>>age;
		cout<<"Enter the fee:";
		cin>>fee;
	}
	void showdata1()
	{
		showdata();
		cout<<"Age:"<<age<<endl;
		cout<<"Fee:"<<fee<<endl;
	}
};
int main()
{
	stu1 s;
	s.getdata1();
	s.showdata1();
}
