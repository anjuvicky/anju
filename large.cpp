#include<iostream.h>
using namespace std;
int main()
{
float a,b,c;
cout<<"enter three numbers";
cin>>a>>b>>c;
if(a>b &&a>c)
{
cout<<"a is greater"<<a
}
if(b>c&&b>a)
{
cout<<"b is greater"<<b;
}
if(c>a&&c>b)
{
cout<<"c is greater"<<c
}
return 0;
}
