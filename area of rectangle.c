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
int main()
{
float a,b,Area, perimeter;
printf("Enter the lenght of rectangle\n");
scanf("%f",&a);
printf("Enter the breath of rectangle\n");
scanf("%f",&b);
Area=a*b;
perimeter=2*(a+b);
printf("The Area of rectangle is %f \n",Area);
printf("The  perimeter of rectangle is %f ",perimeter);
getch();
return(0);
}
