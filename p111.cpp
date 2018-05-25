#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
  char s1,s2,s3;
  cin>>s1,s2;
  s3=strcmp(s1,s2);
  if(s3!=0)
  {
      cout<<s1[k];
  }
  else
  {
      cout<<"no";
  }
