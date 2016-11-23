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
float c,f;
printf("Enter the celsius\n");
scanf("%f",&c);
f=1.8*(c+32);
printf("the temperature in fahrenheit is %f",f);
return 0;
}
