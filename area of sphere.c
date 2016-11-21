/*
Student Name:change joshi
Subject:Programming Fundamental
Roll no:5
Lab sheet no:04
Program:A C program to print area and perimeter of rectangle
Date:21/11/2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.14
int main()
{
float r, Area, volume;
printf("Enter the radius of sphere\n");
scanf("%f",&r);
Area=4*pi*pow(r,2);
volume=4/3*pi*pow(r,3);
printf("The Area of sphere is %f \n",Area);
printf("The  perimeter of rectangle is %f ",volume);
getch();
return(0);
}
