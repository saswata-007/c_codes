#include<stdio.h>
void main()
{
int a,b,c,d,e;
float avg;
printf("Enter the first number: ");
scanf("%d\n",&a);
printf("Enter the second number: ");
scanf("%d\n",&b);
printf("Enter the third number: ");
scanf("%d\n",&c);
printf("Enter the fourth number: ");
scanf("%d\n",&d);
e = a+b+c+d;
avg = e/4;
printf("The average is= %f\n",avg);
}
