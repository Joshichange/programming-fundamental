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
int main () {
float b, h, area ;
printf ("enter the base of a triangle");
scanf("%f", &b);
printf ("enter the height of a triangle");
scanf("%f", &h);
area = 0.5*b*h;
printf ("the area of triangle is %f",area);
getch () ;
return 0;
}
