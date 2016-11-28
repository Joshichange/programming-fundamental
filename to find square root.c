/*
Student Name:Salav Thapa
Subject:Programing Fundamental
Roll No:
Program:To enter any number and calculate its square
Lab Sheet No:07
Date:2016-11-28
*/

#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    printf("Enter the square root of a:\n");
    scanf("%f",&a);
    b=pow(a,2);
    c=pow(b,0.5);
    printf("the square root  of a: %f",b);
    printf("the square root of a: %f",c);
    return 0;
}







