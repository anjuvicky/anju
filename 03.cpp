#include<iostream>
using namespace std;
int main()
{
    int n,k,i,j;
    char m[4];
    int count=1;
    cin>>n>>k;
    cout<<"enter the numbers";
    cin>>m;
   for(i=0;i<=4;i++)
   {
       cin>>m[i];
   }
   for(i=0;i<3;i++)
   {
       for(j=j+1;j<4;j++)
       {
           if(m[i]==m[j])
           count++;
       }
       cout<<count;
   }
   return 0;
}
