#include <iostream>
using namespace std;

int main() {
  

    int n, k;
    cin >> n >> k;
    string bulbs;
    cin >> bulbs;

    
    auto check = [&](int l) -> bool {
        int ops = 0;
        int i = 0;
        while (i < n) {
            if (bulbs[i] == '1') {
                ops++;
                if (ops > k) return false;
                i += l;       
            } else {
                i++;
            }
        }
        return true;
    };

    int lo = 1, hi = n, ans = n;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (check(mid)) {
            ans = mid;
            hi = mid - 1;   
        } else {
            lo = mid + 1;   
			}
    }

    cout << ans << "\n";
    return 0;
}