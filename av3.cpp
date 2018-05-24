#include<iostream>
using namespace std;
int main()
{
  string str;
  cout<<"enter the string";
  cin>>str;
  str[0]=toupper(str[0]);
  cout<<str;
  return 0;
}
 
