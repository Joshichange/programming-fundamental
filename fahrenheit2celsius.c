/*
name: change G.l Joshi
subjects: Programming fundamental
lab sheet no: 2
Roll no: 5
Program: WAP to read temperture in fahrenheit and convert in celsius? 
date: 23th nov,2016
*/
#include<stdio.h>
int main(){
float a, c;
printf("Enter the fahrenheit\n ");
scanf("%f",&a);
c=0.55*(a-32);
printf("the temperature in celsius is %f",c);
return 0;
}
