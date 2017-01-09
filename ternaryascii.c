/*
change joshi
14
programing fundamental
wap to check weather character is ascii or not using ternary operator
*/
#include<stdio.h>
#include<conio.h>
int main(){
int ascii;
char a;
printf("Enter the character \n");
scanf("%c",&a);
ascii=a;
(ascii>=65&&ascii<=97||(ascii>=97&&ascii<=122))?printf("the character is an alphabet"):printf("the character is not an alphabet");
getch ();
return 0;

}
