#include <stdio.h>
#include <conio.h>
#include <string.h>
void main(){
     char str[20],tmp;
     
     int i,j;
     clrscr();
     
     printf("\nEnter a string : ");
     scanf("%s",str);
     
     for(i=0;i<strlen(str);i=i+2){
     tmp = str[i];
     
     str[i+1] = tmp;
     }
     printf("\nAfter Swap String      : %s",str);
     getch();
}
