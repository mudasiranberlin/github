// C program to generate random numbers
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
 
// Driver program
int main(void)
{
    // This program will create different sequence of
    // random numbers on every program run
 
    // Use current time as seed for random generator
    srand(time(0));
 
    for(int i = 0; i<4; i++)
        printf(" %d ", rand());
 
    return 0;
}


/*#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int a=99;
	int b=99;
	int c=99;
	int d=99;
	int e=99;
	float result;
	float avg;
	result=a+b+c+d+e;
	result=result/500;
	avg=result*100;
	cout<<avg<<"%";
}    /*/

