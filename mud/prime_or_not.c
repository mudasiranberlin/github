#include<iostream>
using namespace std;
int main()
{
	int a;
	int i;
	int count=0;
	printf("Enter the Data to Check No prime :");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			count=count+1;
		}
	}
	if(count==2)
	printf("Number Is Prime:");
	else
	printf("Not Prime");
}
