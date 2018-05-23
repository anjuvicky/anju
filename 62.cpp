#include<iostream>
void main()
{
clrscr();
int n,a[3],i=0,flag=0;
cout<<“Enter any number(max 3 digits):”;
cin>>n;

while(n!=0)
{
a[i++]=n%10;
n=n/10;
}

for(i=i-1;i>=0;–i)
{
if(i==0&&flag==0)
once(a[0]);
if(i==1)
flag=tens(a[1],a[0]);
if(i==2)
hundred(a[2]);
cout<<” “;
}
getch();
}
