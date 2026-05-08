#include<iostream>
using namespace std;


int callcounter() {
   static int count = 0;
   count++;
  
  return count;
}

int main() {
  cout << callcounter() << "\n";
  cout << callcounter() << "\n";
  cout << callcounter() << "\n";
  cout << callcounter() << "\n";
  return 0;
}