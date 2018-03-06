#include<stdio.h>
#include<conio.h>
void main()
{
double n;
printf("enter the number:",n);
scanf("%d",&n);
if(n<=0.0)
{
if(n==0.0)
printf("you entered 0");
else
printf("you entered NEGATIVE number");
}
else
printf("you entered POSITIVE number");
}
