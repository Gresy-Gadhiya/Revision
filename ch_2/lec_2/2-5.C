#include<stdio.h>
#include<conio.h>

main()
{
float pie=3.14;
int radius;
float permeter=2*pie*radius;
clrscr();

printf("enter the radius of circle: ");
scanf("%f",&radius);

permeter=2*pie*radius;
printf("the permeter of circle is: %f",permeter);
getch();
}