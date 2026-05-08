#include <iostream>
using namespace std;

int main() {
    int s1, s2, s3;
    cout << "Enter three scores: ";
    cin >> s1 >> s2 >> s3;

    if (s1 >= s2 && s1 >= s3) cout << "Winner Score: " << s1 << endl;
    else if (s2 >= s1 && s2 >= s3) cout << "Winner Score: " << s2 << endl;
    else cout << "Winner Score: " << s3 << endl;
    return 0;
}