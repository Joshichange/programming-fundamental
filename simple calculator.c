#include <stdio.h>
#include <conio.h>
int main(){
    int a,b, n;
    printf("_________________________________________________________________________________________________________________\n");
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
printf("\t\t\t\tsimple calculator\n");
printf("choose the function\n");
printf("1. ADDITION \n");
printf("2. SUBSTRACTION\n ");
printf("3. MULTIPLICATION\n ");
printf("4. dIVIDEND \n");
printf("5. Exit \n");
scanf("%d",&n);
 printf("Enter the value");
    scanf("%d",&a);
     printf("Enter the value");
    scanf("%d",&b);
switch(n){
case 1:
    a+=b;
    printf("the value is %d",a);
 break;
case 2:
    a-=b;
    printf("The value is %d",a);
    break;
case 3:
    a*=b;
     printf("The value is %d",a);
     break;
case 4:
    a/=b;
 printf("The value is %d",a);
 break;

}

    getch();
    return 0;
}
