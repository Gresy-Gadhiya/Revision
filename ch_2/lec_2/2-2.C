#include<stdio.h>
#include<conio.h>
 main()
 {
int length;
int breadth;
int area=length*breadth;
clrscr();
printf("enter the length of rectangle: ");
scanf("%d",&length);
printf("enter the breadth of rectangle: ");
scanf("%d",&breadth);

area=length*breadth;
printf("the aera of rectangle is: %d",area);
getch();
}