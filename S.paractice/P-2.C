#include<stdio.h>
#include<conio.h>

main()
{  float f,c;
   clrscr();

   printf("enter the f:");
   scanf("%f",&f);

   c=(f-32)*5/9;
   printf("the temperature in celsius is: %f",c);
   getch();
   }