#include<iostream>
using namespace std;
int main()
{
    int n,k;
    char m[4];
    cin>>n>>k;
    cout<<"enter the numbers";
    cin>>m;
    if(m[0]==k && m[1]==k && m[2]==k && m[3]==k && m[4]==k)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    return 0;
    
}
