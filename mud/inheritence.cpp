#include<iostream>
using namespace std;
class stu
{
	int a;
	int b;
	public:
		void getdata()
		{
			cout<<"Enter THE DATA A:";
			cin>>a;
			cout<<"Enter The Of B:";
			cin>>b;
		}
		void showdata()
		{
			cout<<"The Data Is A:";
			cout<<a<<endl;
			cout<<"The Data IS B:";
			cout<<b<<endl;
		}
	
};
class stu1:private stu
{
int x;
int y;
public:
			void getdata1()
		{
			getdata();
			cout<<"Enter THE DATA A:";
			cin>>x;
			cout<<"Enter The Of B:";
			cin>>y;
		}
		void showdata2()
		{
			showdata();
			cout<<"The Data Is X:";
			cout<<x<<endl;
			cout<<"The Data IS Y:";
			cout<<y;
		}	
};
int main()
{
	stu1 s;
	//s.getdata();
	//s.showdata();
	s.getdata1();
	s.showdata2();

}
