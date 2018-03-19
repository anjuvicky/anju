#include <stdio.h>
 
void main()
{
  int array[100], maximum, size, c, location = 1;
 
  printf("Enter the number of elements in array\n");
  scanf("%d", &size);
 

 
  for (c = 0; c < size; c++)
    
 

  for (c = 1; c < size; c++)
  {
    if (array[c] > maximum)
    {
       maximum  = array[c];
       location = c+1;
    }
  }
 
 }
