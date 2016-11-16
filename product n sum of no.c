/*
name: change G.l Joshi
subjects: Programming fundamental
lab sheet no: 2
Roll no: 5
Program: WAP to print sum of two numbers, asked by user
date: 16th nov,2016
*/
#include <stdio.h>
#include <conio.h>
int main (){
int a, b,c, product,sum ;
printf ("Enter the first no:\n ");
scanf ("%d", &a);
printf ("Enter the second no:\n ");
scanf ("%d", &b);
printf ("Enter the third no:\n ");
scanf ("%d", &c);
product = a* b * c;
printf("The product of two value is %d \n ", product);
sum= a + b + c;
printf(" The sum of two value is %d", sum);
getch ();
return 0 ;
}
