#include <stdio.h>
 
void main() {
 
  char fname[30];
  char lname[30];
 
  printf("Type first name:\n");
  scanf("%s", fname);
 
  printf("Type last name:\n");
  scanf("%s", lname);
 
  printf("Your name is: %s %s\n", fname, lname);
getch();
}
