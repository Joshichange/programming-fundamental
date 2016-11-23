/*
name: change G.l Joshi
subjects: Programming fundamental
lab sheet no: 2
Roll no: 5
Program: WAP to read quadratic equation and its value?
date: 23th nov,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
float x1, x2, a, b, c, dis;
printf("Enter the first value\n");
scanf("%f",&a);
printf("Enter the second value\n");
scanf("%f",&b);
printf("Enter the third value\n");
scanf("%f",&c);
dis=b*b-4*a*c;
x1=(-b+pow(dis, 0.5))/(2*a);
x2=(-b-pow(dis,0.5))/(2*a);
printf("The quadratic equation is positive: %f\n",x1);
printf("The value of equation is negative: %f",x2);
return 0;
}
