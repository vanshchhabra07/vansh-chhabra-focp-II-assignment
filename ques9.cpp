#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            cout << "It is a vowel." << endl;
        else
            cout << "It is a consonant." << endl;
    
    
    return 0;
}