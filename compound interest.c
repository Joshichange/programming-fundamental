/*
name :change
subject : programming fundamental
program:WAP to find compound interest?
lab sheet :6
date: 25, nov 2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    float p,t,r,e,ci;
printf("enter the principle :\n");
scanf("%f",&p);
printf("enter the time:\n");
scanf("%f",&t);
printf("enter the rate:\n");
scanf("%f",&r);
e=1+r/100;
ci=(p*pow(e,t)-1);
printf("the compound interest is %f",ci);
getch();
return(0);
}
