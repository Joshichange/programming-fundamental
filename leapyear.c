/*
change joshi
14
programing fundamental
wap to check weather character is ascii or not using ternary operator
*/
#include<stdio.h>
#include<conio.h>
int main(){
int a;
printf("Enter the year \n");
scanf("%d",&a);
(a%4==0&&a%100!=0||a%400==0)?printf
("It is a leap year"):printf("It is not a leap year");
getch ();
return 0;

}
