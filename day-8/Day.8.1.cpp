#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    int num;
    for (int row = 0; row < 5; row++) {
        for (int col = 0; col < 5; col++) {
            cin >> num;
            if (num == 1) {
                // Calculate distance to center at (2, 2)
                int moves = abs(row - 2) + abs(col - 2);
                cout << moves << endl;
            }
        }
    }
    return 0;
}
