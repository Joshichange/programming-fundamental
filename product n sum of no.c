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
printf ("enter the first no ");
scanf ("%d", &a);
printf ("enter the second no ");
scanf ("%d", &b);
printf ("enter the third no ");
scanf ("%d", &c);
product = a* b * c;
printf("the product of two value is %d", product);
sum= a + b + c;
printf("the sum of two value is %d", sum);
getch ();
return 0 ;
}
