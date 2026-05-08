#include <iostream>
using namespace std;

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByValue: a = " << a << ", b = " << b << "\n";
}

void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByReference: a = " << a << ", b = " << b << "\n";
}

int main() {
    int a, b;
    cin >> a >> b;
    
    cout << "Original: a = " << a << ", b = " << b << "\n";
    
    swapByValue(a, b);
    cout << "After swapByValue in main: a = " << a << ", b = " << b << "\n";
    
    swapByReference(a, b);
    cout << "After swapByReference in main: a = " << a << ", b = " << b << "\n";
    
    return 0;
}