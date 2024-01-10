#include<iostream>
using namespace std;
int main()
{	
	int i,j;
	int count=0;
	int x=100;
	for(i=2;i<=100;i++)
	{
		printf("%d\n",i);
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			break;
			else
			if(i==j)
			printf("%d",i);
		}
		
		
		
		
	}
}
