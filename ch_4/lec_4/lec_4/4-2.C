#include<stdio.h>
#include<conio.h>
main()
{int a,b;

 clrscr();

	   printf("the value of a is: ");
	   scanf("%d",&a);


	 printf("\nthe value of b is:");
	 scanf("%d",&b);

	 a=a+b;
	 b=a-b;
	 a=a-b;

	 printf("a=%d",a);
	 printf("b=%d",b);
  getch();
  }