/*
Student name: Hemanta Deuba
Subject: Programming Fundamentals
Roll no: 14
Lab-sheet no: 09
Program: WAP to demonstrate the working mechanism of increment & decrement operators.
Date: 16th November, 2016
*/
#include<stdio.h>
#include<conio.h>
int main()
    {
        int a;
      printf("enter a number: \n");
      scanf("%d",&a);
      printf("Post increment is %d \n",a++);

      printf("Pre increment is %d \n",++a);

      printf("Post decrement is %d \n",a--);

      printf("Pre decrement is %d \n",--a);
getch();
return 0;

    }
