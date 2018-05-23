#include <bits/stdc++.h>
using namespace std;

inline bool isBasedTwo(int n) {
    while (n) {
        if ((n % 10) > 1)
            return false;
        n /= 10;
    }
    return true;
}

int main() {
    int n, count(0);
    cin >> n;
    for (int i(1); i <= n; i++)
        if (isBasedTwo(i))
            ++count;
    cout << count;
    return 0;
}
