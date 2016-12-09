/*
Student Name : Change G.l Joshi
Subject : Programming Fundamental
Roll No: 12
Lab Sheet No:11
Program : WAP to check no.is largest among the three no. using if else ?
Date; December 09 2016
*/

#include <stdio.h>
#include <conio.h>
 int main (){
  int a,b,c,largest;
  printf("Enter the first number:");
  scanf("%d",&a);

  printf("Enter the second number:");
  scanf("%d",&b);

  printf("Enter the second number:");
  scanf("%d",&c);

  if (a>=b&&a>=c)
  {printf("%d is the largest number is ",a);
  }
  else if (b>=a&&b>=c)
  {printf("%d is the largest number is ",b);
  }
  else if (c>=a&&c>=b)
    { printf("%d is the largest number ",c);
          }
    return 0;
    }






