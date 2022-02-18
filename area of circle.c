#include<stdio.h>
#include<conio.h>
main()
{
float radius, area;
printf("\nEnter the radius of Circle : ");
scanf("%f", &radius);
area = 3.14 * radius * radius;
printf("\nArea of Circle : %.3f", area);
getch();
}
