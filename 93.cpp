#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    int d,op;
    cout<<"enter the number";
    cin>>a;
    cout<<"enter the number";
    cin>>b;
    cout<<"enter option";
    switch(op)
    {
    case 1:    
    c=a/b;
    cout<<c<<endl;
    break;
    case 2:
    d=a%b;
    cout<<d<<endl;
    break;
    }
    return 0;
