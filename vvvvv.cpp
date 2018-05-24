#include<iostream>
using namespace std;
int main()
{
  char a[1000];
  int i,n;
  cout<<"enter the number";
  cin>>a;
  for(i=0;i<=a[1000];i++)
  {
      n=a[i]*i;
      i++;
      cout<<n;
  }
  return 0;
}
