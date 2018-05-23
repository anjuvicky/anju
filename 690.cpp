#include<iostream>
int main()
{
int n,f=0,s=1,next;
cout<<"enter the no";
cin>>n;
cout<<"fibonacci series is";
for(i=0;i<=n;i++)
{
if(i==1)
{
cout<<" "<<f;
}
if(i==2)
{
cout<<s<<" ";
}
next=f+s;
f=s;
s=next;
cout<<next<<" ";
}
return 0;
}
