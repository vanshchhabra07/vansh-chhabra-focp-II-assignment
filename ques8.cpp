#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter limit N: ";
    cin >> n;

  
        if (n % 3 == 0 && n % 5 == 0) cout << "BuzzFuzz"; 
        else if (n % 3 == 0) cout << "Buzz"; 
        else if (n % 5 == 0) cout << "Fuzz"; 
       else cout<< "NO tag ";
    
    return 0;
}