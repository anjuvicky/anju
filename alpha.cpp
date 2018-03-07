#include<iostream.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
cout<<"enter the charector:";
cin>>ch;
if((ch>='a' && ch<='z') || (ch>='A'&&ch<='Z'))
{
cout<<ch<<"is a alphabet";
}
else
{
cout<<ch<<"is not a alphabet";
}
getch();
}
