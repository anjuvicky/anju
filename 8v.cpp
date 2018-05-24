#include<iostream>
using namespace std;
int main()
{
  char a[3];
  int n;
  cout<<"enter the number";
  cin>>n;
  cout<<"print the numbers:";
  cin>>a;
  if(a[2]>a[3])
  {
      cout<<a[2];
  }
  
      else if(a[1]>a[2])
      {
      cout<<a[1];
      }
      else
      {
      cout<<"no";
  }
  
}
