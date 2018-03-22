#include <conio.h>
#include <stdio.h>
 
void main()
{
  int num1,num2;
  printf("\nEnter a numbers ");
  scanf("%d",&num);
  if(num%num1==0)
  {
    if(num%num2==0)
    {
      printf("\nThe number %d is divisible by both");
    }
    else
    {
      printf("\nThe number %d is divisible by num1");
    }
  }
  else
  {
    printf("\nThe number %d is niether divisible by num2");
  }
getch();
}
