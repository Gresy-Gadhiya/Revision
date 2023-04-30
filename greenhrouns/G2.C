#include<stdio.h>
#include<conio.h>
main()
{
   int HRD,DA,TA,a;
   int basesalary=100;
   clrscr();

   printf("enter the HRD:");
   scanf("%d",&HRD);

   printf("enter the DA:");
   scanf("%d",&DA);

   printf("enter the TA:");
   scanf("%d",&TA);

   a=HRD+DA+TA+basesalary;
   printf("the gross salary is: %d",a);
   getch();


}