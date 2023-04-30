












#include<stdio.h>
#include<conio.h>
main()
   {   int x,y;
       int z=(x+y)*(x+y)*(x+y);
       clrscr();

       printf("enter the value of x:");
       scanf("%d",&x);

       printf("enter thr value of y: ");
       scanf("%d",&y);

       z=(x+y)*(x+y)*(x+y);
       printf("(x+y)*(x+y)*(x+y): %d",z);
       getch();
       }