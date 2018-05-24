#include<iostream>
using namespace std;
int main()
{
   int n,k;
   int v[3];
   cout<<"enter the numer";
   cin>>n;
   cout<<"enter the pos";
   cin>>k;
   cout<<"enter the values";
  
   switch(k)
   {
       case 1:
       cout<<v[0];
       break;
       case 2:
       cout<<v[1];
       break;
       case 3:
       cout<<v[2];
       break;
   }
   return 0;
}
