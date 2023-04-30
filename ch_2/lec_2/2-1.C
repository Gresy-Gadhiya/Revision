#include<stdio.h>
#include<conio.h>
void main()

{
  float pie=3.14;
  int radius;
  float area;

  clrscr();

  printf("enter the radius of circle is: ");
  scanf("%d",&radius);

  area= pie*radius;
  printf("enter the area of circle is: %f",area);
  getch();
  }
