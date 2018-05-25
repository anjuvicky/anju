#include<iostream>
using namespace std;
int main()
{
int n,k,m;
cin>>n>>k;
for(m=2;m<=9;m++)
{
if(n%m==0 && k%m==0)
{
cout<<m;
}
}
return 0;
}
