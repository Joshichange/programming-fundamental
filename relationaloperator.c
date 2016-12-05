
/*
name:Change joshi
roll no:12
subject:programming fundamentals
program:Wap to print result to use relational operators.
Date december 05, 2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
    float a;
    printf("Enter the marks\n");
    scanf("%f",&a);
    if (a>=35)
    {
        printf ("you have passed");
    }
    else
    {
        printf("You have failed");
    }
    if(a>80&&a<100){
    printf("\nCongrats you passed in distintion");
    }
    if(a>60 && a<80){
        printf("\nYou passed in first division");
    }
    if(a>45 && a<60){
        printf("\nYou passed in second division ");
    }
    if(a>35 && a<45){
        printf("\nYou passed in third division");
    }
getch();
return 0;

}
