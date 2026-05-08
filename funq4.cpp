#include <iostream>
#include <cmath>
using namespace std;

double calculateEMI(double P, double R = 0.01, int T = 12) {
    
    double numerator = P * R * pow(1 + R, T);
    double denominator = pow(1 + R, T) - 1;
    double final = numerator / denominator;
    cout<<final;
}

int main() {
    
    calculateEMI(10000,0.01,12);
    
    
    
    return 0;
}