#include<iostream>
using namespace std;
class stu
{
	int rollno;
	char name[30];
	public:
		void getdata()
		{
			cout<<"Enter the Rollno:";
			cin>>rollno;
			cout<<"Enter The Name:";
			cin>>name;
		}
		void showdata()
		{
			cout<<"The RollNo:"<<rollno<<endl;
			cout<<"The Name is:"<<name<<endl;
		}
};
class marks
{
	protected:
	int english;
	int urdu;
	int social;
	int science;
	int math;
	public:
		void input()
		{
			cout<<"Enter The Marks of English:";
			cin>>english;
			cout<<"Enter The Marks of Urdu:";
			cin>>urdu;
			cout<<"Enter The Marks of Social Science:";
			cin>>social;
			cout<<"Enter The Marks of Science:";
			cin>>science;
			cout<<"Enter The MArks of Math:";
			cin>>math;
		}
};
class result:public stu,public marks
{
	float result;
	float avg;
	public:
	void show()
	{
		result=english+urdu+social+science+math;
		cout<<"Total:"<<result<<endl;
		result=result/500;
		avg=result*100;
		cout<<"The Percentage:"<<avg<<"%";

	}
};
int main()
{
	result r;
	r.getdata();
	r.showdata();
	r.input();
	r.show();
	//r.sum();
}
