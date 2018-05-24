#include<iostream>
#include<string.h>
using namespace std;
struct str
{
    char s[10000];
};

int main() {

    int T;
    cin >> T;
    fflush(stdin);
    str s1[10];
    while (T--) {
        cin >> s1[T].s;
        fflush(stdin);

        int j = 0;
        while (j < strlen(s1[T].s)) {
            if (j % 2 == 0)
                cout << s1[T].s[j];
            ++j;
        }
        cout << " ";
        int k = 0;
        while (k < strlen(s1[T].s)) {
            if (k % 2 == 1)
                cout << s1[T].s[k];
            ++k;
        }
        cout << endl;
    }
    return 0;
}
