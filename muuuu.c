#include "conio.h"
#include "stdio.h"

void main()
{
  int n,sum=0,mul=1,i;
  printf("\nEnter numbers :\n");
  for(i=0;i<5;i++)
  {
  scanf("%d",&n);
  if(n%2==0)
    sum=sum+n;
  else
    mul=mul*n;
  }
  printf("\nThe sum of even numbers is : %d",sum);
  printf("\nThe multiplication of odd numbers is : %d",mul);
getch();
}
