#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str[20];
    int i = 0, j = 0;
    char str1[10],str2[10];

cin>>str1>>str2;
    
    while (str[i])
    {
        if (str[i] != ' ')
           str[j++] = str[i];
        i++;
    }
    str[j] = '\0';
    return str;
}
