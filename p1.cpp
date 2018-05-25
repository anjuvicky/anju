#include<iostream>
using namespace std;
int main()
{
int x1,y1,x2,y2,x3,y3,s1,s2;
cin>>x1>>y1;
cin>>x2>>y2;
cin>>x3>>y3;
s1=(y2-y1)/(x2-x1);
s2=(y3-y2)/(x3-x2);
if(s1==s2)
{
cout<<"yes";
}
else
{
cout<<"no";
}
return 0;
}
