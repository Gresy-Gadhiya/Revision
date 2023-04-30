#include<stdio.h>
#include<conio.h>

main()
{
     int x,y,z,a;
     clrscr();

     printf("enter the x:");
     scanf("%d",&x);

     printf("enter the y:");
     scanf("%d",&y);

     printf("enter the z:");
     scanf("%d",&z);

     a=(x+y+z)*(x+y+z);
     printf("the answer is: %d",a);
     getch(); }