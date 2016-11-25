/*
name: change G.l Joshi
subjects: Programming fundamental
lab sheet no: 2
Roll no: 5
Program: WAP to print arthimatic operation, asked by user
date: 16th nov,2016
*/
#include <stdio.h>
#include <conio.h>
int main (){
int a,b, add,sub,multi,divi;
int modulus;
printf ("Enter the first no:\n ");
scanf ("%d", &a);
printf ("Enter the second no:\n ");
scanf ("%d", &b);
add= a+b;
printf ("the addition of values is %d \n",add);
sub=a-b;
printf("The subtraction of two value is %d \n ", sub);
multi = a*b;
printf(" The multiplication of two value is %d \n", multi);
divi=a/b;
printf(" The division of two value is %d \n", divi);
modulus=a%b;
printf(" The modulus of two value is %d", modulus);
getch ();
return 0 ;
}
