#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long remainder = a % b;
        long long moves = (b - remainder) % b;

        cout << moves << "\n";
    }
    return 0;
}
