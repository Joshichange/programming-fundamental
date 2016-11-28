/*
NAME: CHANGE JOSHI
SUBJECT: PROGRAMMING FUNDAMENTAL
ROLL NO: 5
lAB SHEET NO : 7
PROGRAM: WRITING A C PROGRAM TO PRINT SQURE ROOT.
Date :28 NOV 2016
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







