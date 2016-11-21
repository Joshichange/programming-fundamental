/*
student's name: Sambhav
subject:programming fundamental
roll no:14
labsheet: 4
program: wap to print area of trapezium?
date:21 nov 2016
*/
#include <stdio.h>
#include<conio.h>
int main(){
float a, b,h,area;
printf("Enter the first side of trapezium\n");
scanf("%f",&a);
printf("Enter the second side of trapezium\n");
scanf("%f",&b);
printf("Enter the third side of trapezium\n");
scanf("%f",&h);
area=0.5*(a+b)*h;
printf(" the area of trapezium is %f",area);
getch();
return 0;
}
