#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sumX = 0, sumY = 0;
    bool hasOddEven = false; 

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        sumX += x;
        sumY += y;
        if ((x % 2) != (y % 2)) {
            hasOddEven = true;
        }
    }

    if (sumX % 2 == 0 && sumY % 2 == 0) {
        cout << 0 << endl;
    } else if (sumX % 2 == 1 && sumY % 2 == 1 && hasOddEven) {
        cout << 1 << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}