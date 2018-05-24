#include<iostream>
using namespace std;
int main()
{
   int i,n,s,n1=0,n2=1;
   cout<<"enter 4 numbers";
   cin>>n;
   for(i=0;i<=n;i++)
   {
       s=n1+n2;
       n1=n2;
       n2=s;
       cout<<s<<endl;
   }
   return 0;
}
