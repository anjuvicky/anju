#include<iostream>
using namespace std;
int main()
{
    int n,k;
    
    cin<<n<<k;
    char m[3];
    cout<<"enter the numbers";
    cin>>m;
    if(m[0]%2!=0)
    {
        if(m[1]%2!=0)
        {
            cout<<m[1];
        }
        else
        {
            cout<<m[3];
        }
        
    }
    return 0;
}
