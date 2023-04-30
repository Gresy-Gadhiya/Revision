#include<stdio.h>
#include<conio.h>
 main()
 {     int celsius;
       float fahrenheit;
       clrscr();

       printf("enter the celsius: ");
       scanf("%d",&celsius);

       fahrenheit=(celsius*9/5)+32;
       printf("the temperature in fahrenheit is: %f",fahrenheit);
       getch();
       }
