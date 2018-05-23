#include<iostream.h>
#include<conio.h>
void main()
{
int a,no,sum=0;
clrscr();
cout<<"Enter any num : ";
cin>>no;
while(no>0)
{
a=no%10;
no=no/10;
sum=sum+a;
}
cout<<"\nSum of digits: "<<sum;
getch();
}
