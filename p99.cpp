#include<iostream>
using namespace std;
int main()
{
    int i,n,l,r;
    cout<<"enter the ranges";
    cin>>l>>r;
    for(i=0;i>l;i++)
    {
        for(i=0;i<r;i++)
        {
            n=i*i;
            if(n%2==0)
            {
                cout<<"yes";
            }
            else
            {
                cout<<"no";
            }
        }
    }
    return 0;
}
 


