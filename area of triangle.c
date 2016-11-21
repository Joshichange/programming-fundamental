/*
student's name: change joshi
subject:programming fundamental
roll no:5
labsheet: 4
program: wap to print area of triangle?
date:21 nov 2016
*/
#include <stdio.h>
#include<conio.h>
#include <math.h>
int main(){
int a, b, c;float d, s, area;
printf("Enter the first side of triangle\n");
scanf("%f",& a);
printf("Enter the second side of triangle\n");
scanf("%f",&  b);
printf("Enter the third side of triangle\n");
scanf("%f",&c);
s=a+b+c/2;
d=s*(s-a)*(s-b)*(s-c);
area=pow(a, 0.5);
printf("the area of triangle is %f",area);
getch();
return 0;


}
