#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char first[100],second[100];
int flag=0;
cout<<"Enter first string:- ";
gets(first);
cout<<"Enter second string:- ";
gets(second);

for(i=0;first[i]!='\0';i++)
{
if(first[i]==second[i])
 
{
 cout<<"Entered string is equal";
}
else
{
cout<<"Entered string is not equal";
}
getch();
}
