#include<stdio.h>
#include<conio.h>
main()
{
   int x,y,z,a;
   clrscr();

   printf("enter the x: ");
   scanf("%d",&x);

   printf("\nenter the y:");
   scanf("%d",&y);

   printf("\nenter the z:");
   scanf("%d",&z);

   a=(x+y+z)*(x+y+z)*(x+y+z);
   printf("\nthe answer is: %d",a);
   getch();
}