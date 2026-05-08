#include <iostream>
#include <cmath>
using namespace std;   // ai based soln

int digitSum(int n) {
    n = abs(n); 
    if (n == 0) return 0;
    return (n % 10) + digitSum(n / 10);
}

int main() {
    int N;
    cin >> N;
    cout << digitSum(N) << "\n";
    return 0;
}