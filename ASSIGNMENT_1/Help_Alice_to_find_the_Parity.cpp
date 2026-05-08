#include <bits/stdc++.h>
using namespace std;


long long xorUpTo(long long n) {
    switch (n % 4) {
        case 0: return n;
        case 1: return 1;
        case 2: return n + 1;
        case 3: return 0;
    }
    return 0;
}

int main() {
    long long L, R;
    cin >> L >> R;

    
    long long X = xorUpTo(R) ^ xorUpTo(L - 1);

    if (X % 2 == 0)
        cout << "even" << endl;
    else
        cout << "odd" << endl;

    return 0;
}