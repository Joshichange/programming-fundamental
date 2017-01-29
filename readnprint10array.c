/*
name:change joshi
roll no:14
labsheet:
program: Wap to find factorial of given number using recorsion function.\
date:29 jan 2017
*/
#include<stdio.h>
int fact(int n);
int main()
{
	int num,f;
	printf("Enter thenumber: ");
	scanf("%d",&num);
	f=fact(num);
	printf("factorial is %d \n",f);
	return 0;
}
int fact(int n)	
{
	if(n==1)
	return 1;
	else
	return(n*fact(n-1));
}
   
