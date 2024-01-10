#include<iostream>
using namespace std;
class acc
{
	int a;
	char name[30];
	public:
		void getdata()
		{
			cout<<"Enter the Account Number:";
			cin>>a;
			cout<<"Enter The Account Name:";
			cin>>name;
		}
};
class saving:public acc
{
	float bal;
	public:
	void getdata1()
	{
		cout<<"Enter The Balance";
		cin>>bal;
		if(bal<500)cout<<"Min Balance 500";
		else cout<<"Account Created";
	}
};
class current:public acc
{
	float bal;
	public:
	void show()
	{
		cout<<"Enter The Balance";
		cin>>bal;
		if(bal<1000)cout<<"Min Balance 1000";
		else cout<<"Account Created";
}
};
int main()
{
	int a;
	cout<<"___________________________________"<<endl;
	//cout<<"Welcome to Jammu and kashmir bank:"<<endl;
	cout<<"________________________________"<<endl;
	cout<<"Enter the 1 For Saving Account:";
	cout<<"Enter The 2 For Current Account:";
	cin>>a;
	if(a==1)
	{
		saving s;
		s.getdata();
		s.getdata1();
	}
	else if(a==2)
	{
	current c;
	c.getdata();
	c.show();	
	}
	else
	cout<<"Invalid Selection";
}
