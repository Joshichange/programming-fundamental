/*
name:change joshi
roll no:14
labsheet:
program: Wap to find fibonarial series of given number using recursion function.
date:29 jan 2017
*/
#include<stdio.h>
int fib(int n);
int main()
{
	int a,i;
	printf("Enter the number: ");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		printf("%d",fib(i));
		}
		return 0;
	}
	int fib(int n)
	{
		if(n<2)
return n;
else
return(fib(n-1)+(n-2));
}   

