/*
Student Name :Change joshi
Subject : Programming Fundamental
Roll No: 12
Lab Sheet No:11
Program : WAP to check no.is odd or even using terniary operator?
Date; December 06 2016
*/
#include <stdio.h>
#include <conio.h>
int main(){
int a,b, c;
printf("Enter the first no. is :");
scanf("%d",&a);
printf("Enter the second no. is");
scanf("%d",&b);
printf("Enter the third no. is");
scanf("%d",&c);
(a>=b&&a>=c)?printf("the largest no. is a %d",a):(b>=c&&b>=a)?printf("The largest no. is b %d",b):
    printf("The largest no. is c %d",c);

getch ();
return 0;

}
