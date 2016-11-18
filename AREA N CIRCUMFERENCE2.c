/*
name: change joshi
subject: programmimg fundamental
roll no: 5
program: wap to print simple interest
date: 18 nov 2016
*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define pi 3.14
int main (){
float r, area, circumference, pi=3.14;
printf("Enter the radius:\n");
scanf("%f", &r);
area=pi*pow(r,2);
circumference=2*pi*r;
printf("The area and circumference of circle is %f %f",area, circumference);
getch();
return 0;

}
