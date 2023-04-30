#include<stdio.h>
#include<conio.h>

int main()
{
float principal,rate,time,sim;
clrscr();

printf("enter the principal: ");
scanf("%d",&principal);
printf("enter the rate: ");
scanf("%d",&rate);
printf("enter the interval time: ");
scanf("%d",&time);
sim=principal*rate*time;
printf("the simple interest is: %d",sim);
getch();
}h