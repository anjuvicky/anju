#include<iostream>
using namespace std;
int main()
{
char c;
int n,i;
cout<<"enter the number";
cin>>c;
for(i=0;i<=c;i++)
{
n=i+(i+1);
i=n;
cout<<i;
}
return 0;
}
