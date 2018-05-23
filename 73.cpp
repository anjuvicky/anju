#include<iostream>
int main()
{
char a[10000];
int i,count=0;
cout<<"enter the string";
gets(a);
for(i=0;a[i]!='\0';++i)
{
if(a[i]==" ")
{
count++;
}
cout<<"there are"<<count<<"words";
}
return 0;
}
