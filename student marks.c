#include<stdio.h>
#include<conio.h>
int main()

{
   float ca,ds,is,al,om,pf, s,per;



printf("Enter the marks of Computer architure\n");
scanf("%f",&ca);
printf("Enter the marks of Discrete structure\n");
scanf("%f",&ds);
printf("Enter the marks of interactive skills\n");
scanf("%f",&is);
printf("Enter the marks of Algebra\n");
scanf("%f",&al);

printf("Enter the marks of organization management\n");
scanf("%f",&om);
printf("Enter the marks of Programming fundamental\n");
scanf("%f",&pf);

s=ca+ds+is+al+om+pf;

printf("Total Marks %f\n",s);

per=(s/600)*100;


printf("Your percentage is: %f ", per);

getch();
return(0);






}
