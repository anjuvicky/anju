#include <bits/stdc++.h>
#include <string>
using namespace std;

string repeat(string s, int n)
{
    
    string s1 = s;
 
    for (int i=1; i<n;i++)
        s += s1; // Concatinating strings
 
    return s;
}
 

int main()
{
    string s = "geeks";
    int n = 3;
    cout << repeat(s, n) << endl;;
    return 0;
}
